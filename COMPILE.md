## (2) Compiling using Android-Studio and Gradle (Linux) ##

* STATUS:     **WIP**
* DATE:       `2017-04-16`

### Requirements

You need to have a working installation of:

-   Android-Studio
-   Android SDK
-   Android NDK

To install, first follow [these instructions](https://github.com/SnoopSnitch/xLite/blob/master/INSTALL_AS.md).

### Minimal Gradle Background

At first sight, Gradle can seem rather non-intuitive. The greatest difference
from other scripting languages, is that it is modular and task oriented. Thus
the most common problem new Gradle users have, is that their tasks do not run
in the order as expected, if at all. However, as Gradle has become a de-facto
Android developer standard, the answers can usually be found by Googling on
sites like Stackexchange or [stackoverflow] .

### To run Gradle you also need a project

If you don’t already have your own fresh new project, the first thing to do
is to download your Gradle supported project. In our case, it is the latest
version of [SnoopSnitch]. . However, before doing that, create an empty
developer directory, where you can download and extract SnoopSnitch.

We will use **git** for this purpose. For development use of git, see the
continued series of these Wiki pages. For now, all you need to do is:

    cd /to/your/empty_directory
    git clone --recursive https://opensource.srlabs.de/git/snoopsnitch.git

You directory structure should look something like this:

    $ tree --dirsfirst -L 2
    
    .
    ├── analysis
    │   ├── catcher
    │   └── prebuilt
    ├── contrib
    │   ├── diag_helper
    │   ├── gsm-parser
    │   ├── libasn1c
    │   ├── libosmo-asn1-rrc
    │   ├── libosmocore
    │   ├── patches
    │   ├── prebuilt
    │   ├── scripts
    │   └── sql
    ├── gen
    └── SnoopSnitch
        ├── app
        ├── build
        └── gradle


### Configuring Gradle

In and below the *./SnoopSnitch/* directory there are 4 important (\*) Gradle configuration files:

    ./SnoopSnitch/
    ├── app
    │   └── build.gradle    *  # Contains the SDK, APK, API build versions and compile criteria
    ├── build.gradle        *  # Top-level build file for common Task definitions and configuration options.
    ├── gradle.properties   *  # Project-wide Gradle settings: app signature, daemon, and jvmargs
    ├── gradlew                #   Linux:   Bash wrapper
    ├── gradlew.bat            #   Windows: CMD wrapper
    ├── local.properties    *  # AUTO GENERATED: Contain the SDK and NDK compiler paths (remove from new clones)
    └── settings.gradle        #   What other Gradle build paths to include: "include ':app'"

The *local.properties* file is automatically generated by AS the first time you run it on a new project.
However, **if the project already have this file, it will not be updated!**
In that case it will contain the original paths used by the developer.
Thus you need to either remove the file or edit it. In our case (as we
have installed AS in the previous Wiki) the paths in the file should read:

    sdk.dir=/opt/android/sdk
    #ndk.dir=/opt/android/ndk

You also want to make sure that the *gradle.properties* files contain the line:

    # Make Gradle run in daemon mode for faster execution:
    org.gradle.daemon=true


### Compile native parser library files with NDK


Before we can compile our app with Gradle, we have to compile all its binary dependencies
that are used to:

1.  parse the radio TAP diagnostic messages from /dev/diag.
2.  compile OpenSSL for sending us encrypted logs from within the app.

To compile everything, and copy the libraries and pre-built SQL files to the app assets, do:

    ./compile.sh -t android -u -g
    cd ../contrib
    ./copy.sh

**OR** with gradle:

    ./gradlew -q myPrebuildTask
    ./gradlew -q myCopyTask

The first time compilation takes ~15 minutes on a half-descent laptop.
After that, only ~ 3 minutes. The output should look like this:

    $ ./gradlew -q myPrebuildTask

      Configuring myPrebuildTask ...
      Configuring myCopyTask ...
      Configuring myCheckLibs ...

    =======================================
    Building on linux-x86_64 for android...
    =======================================
    17:21:26
    Building libosmocore ...         ok  [0:14]
    Building libasn1c ...            ok  [0:12]
    Building libosmo-asn1-rrc ...    ok  [10:47]
    Building openssl ...             ok  [1:25]
    Building diag_helper ...         ok  [0:1]
    Building gsm-parser ...          ok  [0:2]
    17:34:07
    ==================================================================================================
    Installing files to: /home/xxx/SRLabs/snoopgradle/snoopsnitch/contrib/build-XXXXXXXXXX/parser/ ...
    ==================================================================================================
    Updating: copying diag_helper and PARSER_DIR files to: BASE_DIR/prebuilt/ ... ok
    Done.

    Remeber to copy library (*.so) and sqlite3 (*.sql) files to app jniLibs and assests.
    To do this, run: . ./copy.sh   from:  ../SnoopSnitch/

    $ ./gradlew -q myCopyTask

      Configuring myPrebuildTask ...
      Configuring myCopyTask ...
      Configuring myCheckLibs ...

    Copying: *.so to JNI_DIR  and  *.sql to ASSETS_DIR.
    JNI_DIR:    ./app/src/main/jniLibs/armeabi/
    ASSETS_DIR: ./app/src/main/assets/
    Done.

You can now build the APK from within Android-Studio or from Bash:

    ./gradlew build

The debug and unsigned release APK will be found under:

    ./app/build/outputs/apk/snoopsnitch-debug.apk
    ./app/build/outputs/apk/snoopsnitch-release-unsigned.apk

NOTE: **You cannot install the unsigned APK.** Only the debug one.


### Adding release signatures to the build files

**WIP**

Releases are signatures automatically by Gradle if there are:

1. a valid key store/password file
2. a valid signature certificate (signed with the passwords from (1)

These two files should look like this:

---


    # Signing...
    # Edit the build.gradle file according to:
    # https://developer.android.com/studio/publish/app-signing.html

    # To build the (unsigned) release APK:
    # (Unsigned releases are not installable unless signed after.)
    #./gradlew assembleRelease


#### More Gradle commands


To manually start/stop the Gradle daemon (use for faster execution):

    ./gradlew --daemon
    ./gradlew --stop

------------------------------------------------------------------------

How to import the SnoopSnitch project into Android Studio
---------------------------------------------------------

  NOTE: **These instructions are for the developer repository.**

    # (0) Make sure you have SSH credentials to the repo... 

    # (1) Import the git clone development project:
    git clone ssh://<ask_srlabs>/snoopsnitch-dev.git

    # (2) Enter the SnoopSnitch directory
    cd snoopsnitch-dev/SnoopSnitch

    # (3) Remove all *.iml files
    find ../ -iname "*.iml" -type f -delete

    # (4) Start Android Studio
    studio &

Once Android Studio starts, select the option: “Open an existing Android Studio project”.
This will open a directory browser dialog.
Navigate to the “SnoopSnitch” directory and select it.
This is a subdirectory of the repo “snoopsnitch-dev”.

Once imported and synced, you should be able to go to the AS menu: **Build >> Build APK**


  [these instructions]: https://github.com/SnoopSnitch/xLite/AS_INSTALL.md
  [stackoverflow]: http://stackoverflow.com/
  [SnoopSnitch]: .

---

EOF


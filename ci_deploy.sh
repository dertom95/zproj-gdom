#!/usr/bin/env bash

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  READ THE ZPROJECT/README.MD FOR INFORMATION ABOUT MAKING PERMANENT CHANGES. #
################################################################################

set -x
set -e

if [ "$BUILD_TYPE" == "default" ]; then
    # Tell travis to deploy all files in dist
    mkdir dist
    export GLOBAL_DOMINATION_DEPLOYMENT=dist/*
    # Move archives to dist
    mv *.tar.gz dist
    mv *.zip dist
    # Generate hash sums
    cd dist
    md5sum *.zip *.tar.gz > MD5SUMS
    sha1sum *.zip *.tar.gz > SHA1SUMS
    cd -
elif [ "$BUILD_TYPE" == "bindings" ] && [ "$BINDING" == "jni" ] && [ -z "$BINDING_OPTS" ]; then
    ( cd bindings/jni && TERM=dumb ./gradlew clean bintrayUpload -PisRelease -PbuildPrefix=/tmp/jni_build )
elif [ "$BUILD_TYPE" == "bindings" ] && [ "$BINDING" == "jni" ] && [ "$BINDING_OPTS" == "android" ]; then
    export GLOBAL_DOMINATION_DEPLOYMENT=bindings/jni/gdom-jni/android/gdom-android-*.jar
else
    export GLOBAL_DOMINATION_DEPLOYMENT=""
fi

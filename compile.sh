#!/usr/bin/env bash
docker build browser -t firehog-compiler
docker run --rm -v $PWD/browser/output:/mnt firehog-compiler
cp -r $PWD/browser/output/lynx $PWD/installer/
cp -r $PWD/browser/output/ncurses $PWD/installer/
#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/Lambocoin.png
ICON_DST=../../src/qt/res/icons/Lambocoin.ico
convert ${ICON_SRC} -resize 16x16 Lambocoin-16.png
convert ${ICON_SRC} -resize 32x32 Lambocoin-32.png
convert ${ICON_SRC} -resize 48x48 Lambocoin-48.png
convert Lambocoin-48.png Lambocoin-32.png Lambocoin-16.png ${ICON_DST}


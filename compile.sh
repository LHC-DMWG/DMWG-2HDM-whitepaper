#!/bin/bash

if [ $# -ne 0 ]; then
pdflatex DMWG-2HDM-whitepaper_Main
bibtex DMWG-2HDM-whitepaper_Main
pdflatex DMWG-2HDM-whitepaper_Main
pdflatex DMWG-2HDM-whitepaper_Main
else
pdflatex DMWG-2HDM-whitepaper_Main
fi


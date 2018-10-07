#!/bin/bash

if [ $# -ne 0 ]; then
pdflatex 2HDMa-whitepaper-external
bibtex 2HDMa-whitepaper-external
pdflatex 2HDMa-whitepaper-external
pdflatex 2HDMa-whitepaper-external
else
pdflatex 2HDMa-whitepaper-external
fi


#!/bin/bash

if [ $# -ne 0 ]; then
pdflatex 2HDMa-whitepaper
bibtex 2HDMa-whitepaper
pdflatex 2HDMa-whitepaper
pdflatex 2HDMa-whitepaper
else
pdflatex 2HDMa-whitepaper
fi


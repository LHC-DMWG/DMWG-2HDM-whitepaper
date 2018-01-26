/*******************************************************************************************************
*  Style for DMWG 2017/18 Whitepaper draft, based on ATLAS and CMS styles and a style file from BaBar  *
*                                                                                                      *
*                                                                                                      *
*  Usage  with C++:                                                                                    *
*                                                                                                      *
*  #include "DMWGStyle2017.cxx"                                                                        *
*  [...]                                                                                               *
*  SetDMWGStyle();       // for 1-D plots (e.g. MET-spectra)                                           *
*  //or                                                                                                *
*  SetDMWGStyle(false);  // also for 1-D plots                                                         *
*  //or                                                                                                *
*  SetDMWGStyle(true);   // for 2-D plots with a 'colz' color legend (e.g. acceptance vs. ma and mA)   *
*                                                                                                      *
*                                                                                                      *
*  Usage with pyROOT:                                                                                  *
*                                                                                                      *
*  ROOT.gROOT.LoadMacro('<PATH/TO/>DMWGStyle2017.cxx')                                                 *
*  [...]                                                                                               *
*  ROOT.SetDMWGStyle()      # for 1-D plots (e.g. MET-spectra)                                         *
*  #or                                                                                                 *
*  ROOT.SetDMWGStyle(False) # also  for 1-D plots                                                      *
*  #or                                                                                                 *
*  ROOT.SetDMWGStyle(True)  # 2-D plots with a 'colz' color legend (e.g. acceptance vs. ma and mA)     *
*                                                                                                      *
*                                                                                                      *
*  Note when calling several times in one session:                                                     *
*                                                                                                      *
*  If you set styles in one script/session/executable more than once,                                  *
*  and do not read the input histograms/graphs from their files again,                                 *
*  they may use the style from when they were first read.                                              *
*  You can force a TCanvas/TPad to use the currently active TStyle by doing                            *
*                                                                                                      *
*  c->UseCurrentStyle();                                                                               *
*                                                                                                      *
*  before drawing.                                                                                     *
*                                                                                                      *
*******************************************************************************************************/

#include <iostream>
#include "TROOT.h"
#include "DMWGStyle2017.h"


void SetDMWGStyle (bool plotwithz)
{
  static TStyle* dmwgStyle;
  const char * name;
  if (plotwithz) name  = "DMWG_colz";
  else name = "DMWG_dflt";
  std::cout << "\nApplying Dark Matter Working Group 2HDMa Whitepaper style settings...\n" << std::endl ;
  dmwgStyle = DMWGStyle(plotwithz,name);
  gROOT->SetStyle(name);
  gROOT->ForceStyle();
}


TStyle* DMWGStyle(bool plotwithz,const char * name ) 
{
  TStyle *dmwgStyle = new TStyle(name,"Dark Matter Working Group Whitepaper style");

  // use plain black on white colors
  int icol = 0; // white
  dmwgStyle->SetFrameBorderMode(icol);
  dmwgStyle->SetFrameFillColor(icol);
  dmwgStyle->SetCanvasBorderMode(icol);
  dmwgStyle->SetCanvasColor(icol);
  dmwgStyle->SetPadBorderMode(icol);
  dmwgStyle->SetPadColor(icol);
  dmwgStyle->SetStatColor(icol);
  dmwgStyle->SetLegendFillColor(icol);
  //dmwgStyle->SetFillColor(icol); // don't use: white fill color for *all* objects

  // set the paper & margin sizes
  dmwgStyle->SetPaperSize(25,25); // EPS paper sizes (x,y) in cm

  // set margin sizes
  if (plotwithz) //make space at right margin for "COLZ" color legend
  {
    dmwgStyle->SetPadRightMargin(0.17);
  }
  else // leave only little whitespace at  right (default)
  {
    dmwgStyle->SetPadRightMargin(0.04);
  }
  dmwgStyle->SetPadTopMargin(0.06); 
  dmwgStyle->SetPadBottomMargin(0.130);
  dmwgStyle->SetPadLeftMargin(0.125);

  // set title offsets (for axis label)
  dmwgStyle->SetTitleOffset(1.18,"xyz"); // 1 = default, 1.2 = 20% increase etc.

  //fonts
  int font = 42; // Helvetica
  double lsize = 0.045; // size for axis labels (numbers at ticks)
  double tfact = 1.15;  // size for axis titles (axis descriptors) relative to axis lables
  dmwgStyle->SetTextFont(font);

  dmwgStyle->SetTextSize(lsize);
  dmwgStyle->SetLegendTextSize(lsize);
  dmwgStyle->SetLegendFont(font);
  dmwgStyle->SetLabelFont(font,"xyz");
  dmwgStyle->SetTitleFont(font,"xyz");
  
  dmwgStyle->SetLabelSize(lsize,"xyz");
  dmwgStyle->SetTitleSize(lsize*tfact,"xyz");

  // use bold lines and markers
  dmwgStyle->SetMarkerStyle(20);  //full circle
  dmwgStyle->SetMarkerSize(0.875); // 7 pixel
  dmwgStyle->SetHistLineWidth(3.);
  dmwgStyle->SetHistFillStyle(3017); // fill area with dashed hatches
  dmwgStyle->SetLineStyleString(3,"[20 12 4 12 4 12]"); // postscript dash-dotted line
  //X error bars = 1/(2*sqrt(12)) bin width
  dmwgStyle->SetErrorX(0.144337567);
  // only small error bar end caps
  dmwgStyle->SetEndErrorSize(3);

  // do not display the standard histo boxes,also no  plot title
  dmwgStyle->SetOptTitle(0);
  dmwgStyle->SetOptStat(0);
  dmwgStyle->SetOptFit(0);
  dmwgStyle->SetLegendBorderSize(0); // no legend borders

  //put tick marks on top and RHS of plots
  dmwgStyle->SetPadTickX(1);
  dmwgStyle->SetPadTickY(1);

  //black body radiator color scheme for "colz" draw options etc.
  dmwgStyle->SetPalette(68);  //Lake: 86 //Avocado: 68 //InvertedDarkBodyRadiator: 56
  dmwgStyle->SetNumberContours(16); // number of contours drawn for 2d contour plots

  return dmwgStyle;

}


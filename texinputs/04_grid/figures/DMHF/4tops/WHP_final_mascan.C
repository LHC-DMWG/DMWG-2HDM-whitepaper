void test()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Feb 28 16:08:49 2018) by ROOT version6.04/14
   TCanvas *c1 = new TCanvas("c1", "c1",10,45,700,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.04);
   c1->SetTopMargin(0.06);
   c1->SetBottomMargin(0.13);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "c1_1",0,0.33,1,1);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(178.4,-3.69897,1298.4,-0.4570345);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLogy();
   c1_1->SetTickx(1);
   c1_1->SetTicky(1);
   c1_1->SetLeftMargin(0.15);
   c1_1->SetRightMargin(0.04);
   c1_1->SetTopMargin(0.07462686);
   c1_1->SetBottomMargin(0);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1[7] = {
   350,
   400,
   500,
   600,
   800,
   1000,
   1250};
   Double_t Graph0_fy1[7] = {
   0.02068,
   0.02323,
   0.01884,
   0.0155,
   0.0122,
   0.01096,
   0.01037};
   TGraph *graph = new TGraph(7,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle(";m(a) GeV; #sigma_{4t}");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,260,1340);
   Graph_Graph1->SetMinimum(0.0002);
   Graph_Graph1->SetMaximum(0.2);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetFillStyle(3017);
   Graph_Graph1->SetLineWidth(3);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->SetMarkerSize(0.875);
   Graph_Graph1->GetXaxis()->SetTitle("m(a) GeV");
   Graph_Graph1->GetXaxis()->SetRange(9,92);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.06716418);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.07723881);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle(" #sigma_{4t}");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.06716418);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.07723881);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.06716418);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.07723881);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("al");
   
   Double_t Graph1_fx2[7] = {
   350,
   400,
   500,
   600,
   800,
   1000,
   1250};
   Double_t Graph1_fy2[7] = {
   0.000346,
   0.0003845,
   0.0004875,
   0.0006405,
   0.001042,
   0.001146,
   0.001152};
   graph = new TGraph(7,Graph1_fx2,Graph1_fy2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,260,1340);
   Graph_Graph2->SetMinimum(0.0002);
   Graph_Graph2->SetMaximum(0.2);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetFillStyle(3017);
   Graph_Graph2->SetLineWidth(3);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->SetMarkerSize(0.875);
   Graph_Graph2->GetXaxis()->SetRange(9,92);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.06716418);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.07723881);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.06716418);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.07723881);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.06716418);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.07723881);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("l");
   
   Double_t Graph2_fx3[7] = {
   350,
   400,
   500,
   600,
   800,
   1000,
   1250};
   Double_t Graph2_fy3[7] = {
   0.0001868,
   0.0002017,
   0.0002384,
   0.0002878,
   0.00039,
   0.0004177,
   0.0004176};
   graph = new TGraph(7,Graph2_fx3,Graph2_fy3);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,260,1340);
   Graph_Graph3->SetMinimum(0.0002);
   Graph_Graph3->SetMaximum(0.2);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetFillStyle(3017);
   Graph_Graph3->SetLineWidth(3);
   Graph_Graph3->SetMarkerStyle(20);
   Graph_Graph3->SetMarkerSize(0.875);
   Graph_Graph3->GetXaxis()->SetRange(9,92);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.06716418);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.07723881);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.06716418);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.07723881);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.06716418);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.07723881);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("l");
   
   Double_t Graph3_fx4[7] = {
   350,
   400,
   500,
   600,
   800,
   1000,
   1250};
   Double_t Graph3_fy4[7] = {
   0.003406,
   0.005166,
   0.003554,
   0.002224,
   0.0009027,
   0.0003846,
   8.755e-05};
   graph = new TGraph(7,Graph3_fx4,Graph3_fy4);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc9900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,260,1340);
   Graph_Graph4->SetMinimum(0.0002);
   Graph_Graph4->SetMaximum(0.2);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetFillStyle(3017);
   Graph_Graph4->SetLineWidth(3);
   Graph_Graph4->SetMarkerStyle(20);
   Graph_Graph4->SetMarkerSize(0.875);
   Graph_Graph4->GetXaxis()->SetRange(9,92);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.06716418);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.07723881);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.06716418);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.07723881);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.06716418);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.07723881);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("l");
   
   Double_t Graph4_fx5[7] = {
   350,
   400,
   500,
   600,
   800,
   1000,
   1250};
   Double_t Graph4_fy5[7] = {
   0.01254,
   0.01512,
   0.01375,
   0.01253,
   0.01168,
   0.01232,
   0.01104};
   graph = new TGraph(7,Graph4_fx5,Graph4_fy5);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,260,1340);
   Graph_Graph5->SetMinimum(0.0002);
   Graph_Graph5->SetMaximum(0.2);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);
   Graph_Graph5->SetFillStyle(3017);
   Graph_Graph5->SetLineWidth(3);
   Graph_Graph5->SetMarkerStyle(20);
   Graph_Graph5->SetMarkerSize(0.875);
   Graph_Graph5->GetXaxis()->SetRange(9,92);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.06716418);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.07723881);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.06716418);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.07723881);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.06716418);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.07723881);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("l");
   
   Double_t Graph5_fx6[7] = {
   350,
   400,
   500,
   600,
   800,
   1000,
   1250};
   Double_t Graph5_fy6[7] = {
   0.009311,
   0.009311,
   0.009311,
   0.009311,
   0.009311,
   0.009311,
   0.009311};
   graph = new TGraph(7,Graph5_fx6,Graph5_fy6);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,260,1340);
   Graph_Graph6->SetMinimum(0.0002);
   Graph_Graph6->SetMaximum(0.2);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);
   Graph_Graph6->SetFillStyle(3017);
   Graph_Graph6->SetLineWidth(3);
   Graph_Graph6->SetMarkerStyle(20);
   Graph_Graph6->SetMarkerSize(0.875);
   Graph_Graph6->GetXaxis()->SetRange(9,92);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.06716418);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.07723881);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.06716418);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.07723881);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.06716418);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.07723881);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("l");
   
   Double_t Graph6_fx7[7] = {
   350,
   400,
   500,
   600,
   800,
   1000,
   1250};
   Double_t Graph6_fy7[7] = {
   0.00437,
   0.006058,
   0.004605,
   0.003312,
   0.002521,
   0.002923,
   0.001853};
   graph = new TGraph(7,Graph6_fx7,Graph6_fy7);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#3366ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,260,1340);
   Graph_Graph7->SetMinimum(0.0002);
   Graph_Graph7->SetMaximum(0.2);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetFillStyle(3017);
   Graph_Graph7->SetLineWidth(3);
   Graph_Graph7->SetMarkerStyle(20);
   Graph_Graph7->SetMarkerSize(0.875);
   Graph_Graph7->GetXaxis()->SetRange(9,92);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.06716418);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.07723881);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.06716418);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.07723881);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.06716418);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.07723881);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw("l");
   TLatex *   tex = new TLatex(0.2,0.95," m(A) = m(H) = m(H^{#pm}) = 1000 GeV, tan#beta = 1,sin#theta = 0.7");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.05970149);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.75,0.65,0.95,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05970149);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1);
   TLegendEntry *entry=leg->AddEntry("Graph0","DMSimp","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","t#bar{t}+H(t#bar{t})","l");

   ci = TColor::GetColor("#cc00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","t#bar{t}+A(t#bar{t})","l");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","t#bar{t}+a(t#bar{t})","l");

   ci = TColor::GetColor("#cc9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.55,0.65,0.75,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05970149);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1);
   entry=leg->AddEntry("Graph4","4t  |SM+NP|^{2}","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","4t  |SM|^{2}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph6","4t  |NP|^{2}","l");

   ci = TColor::GetColor("#3366ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "c1_2",0,0,1,0.33);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(178.4,0.8585714,1298.4,1.11);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetTickx(1);
   c1_2->SetTicky(1);
   c1_2->SetLeftMargin(0.15);
   c1_2->SetRightMargin(0.04);
   c1_2->SetTopMargin(0);
   c1_2->SetBottomMargin(0.3636364);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx8[7] = {
   350,
   400,
   500,
   600,
   800,
   1000,
   1250};
   Double_t Graph0_fy8[7] = {
   1.090989,
   1.016468,
   1.012073,
   1.007422,
   1.013014,
   0.9930195,
   1.011232};
   graph = new TGraph(7,Graph0_fx8,Graph0_fy8);
   graph->SetName("Graph0");
   graph->SetTitle(";m(a) [GeV]; SM interference");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","",100,260,1340);
   Graph_Graph8->SetMinimum(0.95);
   Graph_Graph8->SetMaximum(1.11);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);
   Graph_Graph8->SetFillStyle(3017);
   Graph_Graph8->SetLineWidth(3);
   Graph_Graph8->SetMarkerStyle(20);
   Graph_Graph8->SetMarkerSize(0.875);
   Graph_Graph8->GetXaxis()->SetTitle("m(a) [GeV]");
   Graph_Graph8->GetXaxis()->SetRange(9,92);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.1363636);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.1568182);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetTitle("SM interference");
   Graph_Graph8->GetYaxis()->SetNdivisions(505);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.1363636);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.1363636);
   Graph_Graph8->GetYaxis()->SetTitleOffset(0.45);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.06716418);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.07723881);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw("al");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}

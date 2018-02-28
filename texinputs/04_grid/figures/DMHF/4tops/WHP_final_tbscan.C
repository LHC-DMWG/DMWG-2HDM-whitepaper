void test()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Feb 28 16:12:52 2018) by ROOT version6.04/14
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
   c1_1->Range(0,0,1,1);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLogx();
   c1_1->SetLogy();
   c1_1->SetTickx(1);
   c1_1->SetTicky(1);
   c1_1->SetLeftMargin(0.15);
   c1_1->SetRightMargin(0.04);
   c1_1->SetTopMargin(0.07462686);
   c1_1->SetBottomMargin(0);
   c1_1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1[4] = {
   0.5,
   1,
   2,
   5};
   Double_t Graph0_fy1[4] = {
   0.02285,
   0.005987,
   0.001313,
   7.939e-05};
   TGraph *graph = new TGraph(4,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle(";tan#beta; #sigma_{4t}");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.05,5.45);
   Graph_Graph1->SetMinimum(4e-05);
   Graph_Graph1->SetMaximum(0.4);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetFillStyle(3017);
   Graph_Graph1->SetLineWidth(3);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->SetMarkerSize(0.875);
   Graph_Graph1->GetXaxis()->SetTitle("tan#beta");
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
   
   Double_t Graph1_fx2[4] = {
   0.5,
   1,
   2,
   5};
   Double_t Graph1_fy2[4] = {
   0.02595,
   0.006419,
   0.001141,
   5.394e-05};
   graph = new TGraph(4,Graph1_fx2,Graph1_fy2);
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
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.05,5.45);
   Graph_Graph2->SetMinimum(4e-05);
   Graph_Graph2->SetMaximum(0.4);
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
   
   Double_t Graph2_fx3[4] = {
   0.5,
   2,
   5,
   0};
   Double_t Graph2_fy3[4] = {
   0.003606,
   1.962e-05,
   5.114e-07,
   0};
   graph = new TGraph(4,Graph2_fx3,Graph2_fy3);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.0055,5.5);
   Graph_Graph3->SetMinimum(4e-05);
   Graph_Graph3->SetMaximum(0.4);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetFillStyle(3017);
   Graph_Graph3->SetLineWidth(3);
   Graph_Graph3->SetMarkerStyle(20);
   Graph_Graph3->SetMarkerSize(0.875);
   Graph_Graph3->GetXaxis()->SetRange(9,91);
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
   
   Double_t Graph3_fx4[4] = {
   0.5,
   1,
   2,
   5};
   Double_t Graph3_fy4[4] = {
   0.07046,
   0.02283,
   0.0118,
   0.009414};
   graph = new TGraph(4,Graph3_fx4,Graph3_fy4);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.05,5.45);
   Graph_Graph4->SetMinimum(4e-05);
   Graph_Graph4->SetMaximum(0.4);
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
   
   Double_t Graph4_fx5[4] = {
   0.5,
   1,
   2,
   5};
   Double_t Graph4_fy5[4] = {
   0.0093,
   0.0093,
   0.0093,
   0.0093};
   graph = new TGraph(4,Graph4_fx5,Graph4_fy5);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(3);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.05,5.45);
   Graph_Graph5->SetMinimum(4e-05);
   Graph_Graph5->SetMaximum(0.4);
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
   
   Double_t Graph5_fx6[4] = {
   0.5,
   1,
   2,
   5};
   Double_t Graph5_fy6[4] = {
   0.06664,
   0.0128,
   0.002579,
   0.0002532};
   graph = new TGraph(4,Graph5_fx6,Graph5_fy6);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#3366ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.05,5.45);
   Graph_Graph6->SetMinimum(4e-05);
   Graph_Graph6->SetMaximum(0.4);
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
   TLatex *   tex = new TLatex(0.2,0.95," m(A) = m(H) = m(H^{+}) = 600 GeV, m(a) = 400 GeV,sin#theta = 0.35");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.05970149);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(-2.353437e-185,-2.353437e-185,-2.353437e-185,-2.353437e-185,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05970149);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1);
   TLegendEntry *entry=leg->AddEntry("Graph0","t#bar{t}H(t#bar{t})","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph1","t#bar{t}A(t#bar{t})","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","t#bar{t}a(t#bar{t})","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(-2.353437e-185,-2.353437e-185,-2.353437e-185,-2.353437e-185,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05970149);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1);
   entry=leg->AddEntry("Graph3","4t  |SM+NP|^{2}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph4","4t  |SM|^{2}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph5","4t  |NP|^{2}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "c1_2",0,0,1,0.33);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(0,0,1,1);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetLogx();
   c1_2->SetTickx(1);
   c1_2->SetTicky(1);
   c1_2->SetLeftMargin(0.15);
   c1_2->SetRightMargin(0.04);
   c1_2->SetTopMargin(0);
   c1_2->SetBottomMargin(0.3636364);
   c1_2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx7[4] = {
   0.5,
   1,
   2,
   5};
   Double_t Graph0_fy7[4] = {
   1.077775,
   0.9680245,
   1.006695,
   1.014786};
   graph = new TGraph(4,Graph0_fx7,Graph0_fy7);
   graph->SetName("Graph0");
   graph->SetTitle(";tan#beta; SM interference");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,0.05,5.45);
   Graph_Graph7->SetMinimum(0.9);
   Graph_Graph7->SetMaximum(1.098);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetFillStyle(3017);
   Graph_Graph7->SetLineWidth(3);
   Graph_Graph7->SetMarkerStyle(20);
   Graph_Graph7->SetMarkerSize(0.875);
   Graph_Graph7->GetXaxis()->SetTitle("tan#beta");
   Graph_Graph7->GetXaxis()->SetRange(9,92);
   Graph_Graph7->GetXaxis()->SetMoreLogLabels();
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.1363636);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.1568182);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetTitle("SM interference");
   Graph_Graph7->GetYaxis()->SetNdivisions(504);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.1363636);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.1363636);
   Graph_Graph7->GetYaxis()->SetTitleOffset(0.45);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.06716418);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.07723881);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw("al");
   TLine *line = new TLine(300,1,1200,1);
   line->Draw();
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}

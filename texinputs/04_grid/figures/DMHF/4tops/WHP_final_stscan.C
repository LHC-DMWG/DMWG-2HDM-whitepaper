void test()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Mar  5 16:49:18 2018) by ROOT version6.04/14
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
   TPad *c1_1 = new TPad("c1_1", "c1_1",0,0.05,1,1);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(0,0,1,1);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetTickx(1);
   c1_1->SetTicky(1);
   c1_1->SetLeftMargin(0.15);
   c1_1->SetRightMargin(0.04);
   c1_1->SetTopMargin(0.07368421);
   c1_1->SetBottomMargin(0.13);
   c1_1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1[4] = {
   0.25,
   0.5,
   0.7,
   0.9};
   Double_t Graph0_fy1[4] = {
   0.01229,
   0.01779,
   0.0411,
   0.1001};
   TGraph *graph = new TGraph(4,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle(";sin#theta; #sigma_{4t} [pb]");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.185,0.965);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(0.12);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetFillStyle(3017);
   Graph_Graph1->SetLineWidth(3);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->SetMarkerSize(0.875);
   Graph_Graph1->GetXaxis()->SetTitle("sin#theta");
   Graph_Graph1->GetXaxis()->SetRange(0,101);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.04736842);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05447368);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle(" #sigma_{4t} [pb]");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.04736842);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05447368);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.04736842);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.05447368);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("al");
   
   Double_t Graph1_fx2[4] = {
   0.25,
   0.5,
   0.7,
   0.9};
   Double_t Graph1_fy2[4] = {
   0.0643,
   0.05297,
   0.04352,
   0.03757};
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
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.185,0.965);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(0.12);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetFillStyle(3017);
   Graph_Graph2->SetLineWidth(3);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->SetMarkerSize(0.875);
   Graph_Graph2->GetXaxis()->SetRange(0,101);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.04736842);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.05447368);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.04736842);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.05447368);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.04736842);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.05447368);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("l");
   
   Double_t Graph2_fx3[4] = {
   0.25,
   0.5,
   0.7,
   0.9};
   Double_t Graph2_fy3[4] = {
   0.0093,
   0.0093,
   0.0093,
   0.0093};
   graph = new TGraph(4,Graph2_fx3,Graph2_fy3);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(3);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.875);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.185,0.965);
   Graph_Graph3->SetMinimum(0);
   Graph_Graph3->SetMaximum(0.12);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetFillStyle(3017);
   Graph_Graph3->SetLineWidth(3);
   Graph_Graph3->SetMarkerStyle(20);
   Graph_Graph3->SetMarkerSize(0.875);
   Graph_Graph3->GetXaxis()->SetRange(0,101);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.04736842);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.05447368);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.04736842);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.05447368);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.04736842);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.05447368);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("l");
   TLatex *   tex = new TLatex(0.2,0.95," m(A) = m(H) = m(H^{+}), tan#beta = 0.5");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04210526);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(-2.353437e-185,-2.353437e-185,-2.353437e-185,-2.353437e-185,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04210526);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1);
   TLegendEntry *entry=leg->AddEntry("Graph0","benchmark 3b","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph1","benchmark 3a","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","4t  |SM|^{2}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(-2.353437e-185,-2.353437e-185,-2.353437e-185,-2.353437e-185,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04210526);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1);
   leg->Draw();
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "c1_2",0,0,1,0.05);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(0,0,1,1);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetTickx(1);
   c1_2->SetTicky(1);
   c1_2->SetLeftMargin(0.15);
   c1_2->SetRightMargin(0.04);
   c1_2->SetTopMargin(0);
   c1_2->SetFrameBorderMode(0);
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}

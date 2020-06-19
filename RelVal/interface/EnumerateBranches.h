#ifndef IWILLSEEYOULATER
#define IWILLSEEYOULATER 1

#include <vector>
#include <functional>
#include <algorithm>
#include <cassert>
#include "PandaTree/Objects/interface/Event.h"

namespace testpanda {

  template <int P>
  struct plotter {
    constexpr static const char* name = nullptr;
  };

  template <>
  struct plotter <0> {
    constexpr static const char* name = "common/run";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.run)};
      return output;
    }
  };

  template <>
  struct plotter <1> {
    constexpr static const char* name = "common/fixedGridRhoFastjetCentralCalo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.fixedGridRhoFastjetCentralCalo)};
      return output;
    }
  };

  template <>
  struct plotter <2> {
    constexpr static const char* name = "common/fixedGridRhoFastjetAll";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.fixedGridRhoFastjetAll)};
      return output;
    }
  };

  template <>
  struct plotter <3> {
    constexpr static const char* name = "common/fixedGridRhoFastjetCentralNeutral";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.fixedGridRhoFastjetCentralNeutral)};
      return output;
    }
  };

  template <>
  struct plotter <4> {
    constexpr static const char* name = "common/nLHEScaleWeight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.nLHEScaleWeight)};
      return output;
    }
  };

  template <>
  struct plotter <5> {
    constexpr static const char* name = "common/nLHEPdfWeight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.nLHEPdfWeight)};
      return output;
    }
  };

  template <>
  struct plotter <6> {
    constexpr static const char* name = "common/luminosityBlock";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.luminosityBlock)};
      return output;
    }
  };

  template <>
  struct plotter <7> {
    constexpr static const char* name = "common/LHEWeight_originalXWGTUP";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.LHEWeight_originalXWGTUP)};
      return output;
    }
  };

  template <>
  struct plotter <8> {
    constexpr static const char* name = "common/nLHEReweightingWeight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.nLHEReweightingWeight)};
      return output;
    }
  };

  template <>
  struct plotter <9> {
    constexpr static const char* name = "common/event";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.event)};
      return output;
    }
  };

  template <>
  struct plotter <10> {
    constexpr static const char* name = "common/genWeight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.genWeight)};
      return output;
    }
  };

  template <>
  struct plotter <11> {
    constexpr static const char* name = "Flag/EcalDeadCellBoundaryEnergyFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.EcalDeadCellBoundaryEnergyFilter)};
      return output;
    }
  };

  template <>
  struct plotter <12> {
    constexpr static const char* name = "Flag/EcalDeadCellTriggerPrimitiveFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.EcalDeadCellTriggerPrimitiveFilter)};
      return output;
    }
  };

  template <>
  struct plotter <13> {
    constexpr static const char* name = "Flag/trkPOG_manystripclus53X";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.trkPOG_manystripclus53X)};
      return output;
    }
  };

  template <>
  struct plotter <14> {
    constexpr static const char* name = "Flag/chargedHadronTrackResolutionFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.chargedHadronTrackResolutionFilter)};
      return output;
    }
  };

  template <>
  struct plotter <15> {
    constexpr static const char* name = "Flag/trkPOG_logErrorTooManyClusters";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.trkPOG_logErrorTooManyClusters)};
      return output;
    }
  };

  template <>
  struct plotter <16> {
    constexpr static const char* name = "Flag/trkPOGFilters";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.trkPOGFilters)};
      return output;
    }
  };

  template <>
  struct plotter <17> {
    constexpr static const char* name = "Flag/HBHENoiseFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.HBHENoiseFilter)};
      return output;
    }
  };

  template <>
  struct plotter <18> {
    constexpr static const char* name = "Flag/CSCTightHaloTrkMuUnvetoFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.CSCTightHaloTrkMuUnvetoFilter)};
      return output;
    }
  };

  template <>
  struct plotter <19> {
    constexpr static const char* name = "Flag/ecalBadCalibFilterV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.ecalBadCalibFilterV2)};
      return output;
    }
  };

  template <>
  struct plotter <20> {
    constexpr static const char* name = "Flag/METFilters";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.METFilters)};
      return output;
    }
  };

  template <>
  struct plotter <21> {
    constexpr static const char* name = "Flag/ecalBadCalibFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.ecalBadCalibFilter)};
      return output;
    }
  };

  template <>
  struct plotter <22> {
    constexpr static const char* name = "Flag/BadPFMuonFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.BadPFMuonFilter)};
      return output;
    }
  };

  template <>
  struct plotter <23> {
    constexpr static const char* name = "Flag/HBHENoiseIsoFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.HBHENoiseIsoFilter)};
      return output;
    }
  };

  template <>
  struct plotter <24> {
    constexpr static const char* name = "Flag/globalSuperTightHalo2016Filter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.globalSuperTightHalo2016Filter)};
      return output;
    }
  };

  template <>
  struct plotter <25> {
    constexpr static const char* name = "Flag/BadPFMuonSummer16Filter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.BadPFMuonSummer16Filter)};
      return output;
    }
  };

  template <>
  struct plotter <26> {
    constexpr static const char* name = "Flag/ecalLaserCorrFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.ecalLaserCorrFilter)};
      return output;
    }
  };

  template <>
  struct plotter <27> {
    constexpr static const char* name = "Flag/trkPOG_toomanystripclus53X";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.trkPOG_toomanystripclus53X)};
      return output;
    }
  };

  template <>
  struct plotter <28> {
    constexpr static const char* name = "Flag/hcalLaserEventFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.hcalLaserEventFilter)};
      return output;
    }
  };

  template <>
  struct plotter <29> {
    constexpr static const char* name = "Flag/muonBadTrackFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.muonBadTrackFilter)};
      return output;
    }
  };

  template <>
  struct plotter <30> {
    constexpr static const char* name = "Flag/BadChargedCandidateFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.BadChargedCandidateFilter)};
      return output;
    }
  };

  template <>
  struct plotter <31> {
    constexpr static const char* name = "Flag/HcalStripHaloFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.HcalStripHaloFilter)};
      return output;
    }
  };

  template <>
  struct plotter <32> {
    constexpr static const char* name = "Flag/CSCTightHaloFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.CSCTightHaloFilter)};
      return output;
    }
  };

  template <>
  struct plotter <33> {
    constexpr static const char* name = "Flag/CSCTightHalo2015Filter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.CSCTightHalo2015Filter)};
      return output;
    }
  };

  template <>
  struct plotter <34> {
    constexpr static const char* name = "Flag/BadChargedCandidateSummer16Filter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.BadChargedCandidateSummer16Filter)};
      return output;
    }
  };

  template <>
  struct plotter <35> {
    constexpr static const char* name = "Flag/goodVertices";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.goodVertices)};
      return output;
    }
  };

  template <>
  struct plotter <36> {
    constexpr static const char* name = "Flag/eeBadScFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.eeBadScFilter)};
      return output;
    }
  };

  template <>
  struct plotter <37> {
    constexpr static const char* name = "Flag/globalTightHalo2016Filter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.globalTightHalo2016Filter)};
      return output;
    }
  };

  template <>
  struct plotter <38> {
    constexpr static const char* name = "GenPart/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.GenPart.size())};
      return output;
    }
  };

  template <>
  struct plotter <39> {
    constexpr static const char* name = "GenPart/status";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.status);
      return output;
    }
  };

  template <>
  struct plotter <40> {
    constexpr static const char* name = "GenPart/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <41> {
    constexpr static const char* name = "GenPart/statusFlags";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.statusFlags);
      return output;
    }
  };

  template <>
  struct plotter <42> {
    constexpr static const char* name = "GenPart/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <43> {
    constexpr static const char* name = "GenPart/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <44> {
    constexpr static const char* name = "GenPart/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <45> {
    constexpr static const char* name = "GenPart/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <46> {
    constexpr static const char* name = "GenPart/genPartIdxMother";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.genPartIdxMother);
      return output;
    }
  };

  template <>
  struct plotter <47> {
    constexpr static const char* name = "GenPart/genPartFlav";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.genPartFlav);
      return output;
    }
  };

  template <>
  struct plotter <48> {
    constexpr static const char* name = "Electron/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Electron.size())};
      return output;
    }
  };

  template <>
  struct plotter <49> {
    constexpr static const char* name = "Electron/mvaSpring16GP_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16GP_WP90);
      return output;
    }
  };

  template <>
  struct plotter <50> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <51> {
    constexpr static const char* name = "Electron/dr03EcalRecHitSumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03EcalRecHitSumEt);
      return output;
    }
  };

  template <>
  struct plotter <52> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <53> {
    constexpr static const char* name = "Electron/convVeto";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.convVeto);
      return output;
    }
  };

  template <>
  struct plotter <54> {
    constexpr static const char* name = "Electron/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <55> {
    constexpr static const char* name = "Electron/dzErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dzErr);
      return output;
    }
  };

  template <>
  struct plotter <56> {
    constexpr static const char* name = "Electron/pfRelIso03_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pfRelIso03_all);
      return output;
    }
  };

  template <>
  struct plotter <57> {
    constexpr static const char* name = "Electron/photonIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.photonIdx);
      return output;
    }
  };

  template <>
  struct plotter <58> {
    constexpr static const char* name = "Electron/tightCharge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.tightCharge);
      return output;
    }
  };

  template <>
  struct plotter <59> {
    constexpr static const char* name = "Electron/jetRelIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.jetRelIso);
      return output;
    }
  };

  template <>
  struct plotter <60> {
    constexpr static const char* name = "Electron/vidNestedWPBitmapSum16";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.vidNestedWPBitmapSum16);
      return output;
    }
  };

  template <>
  struct plotter <61> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso);
      return output;
    }
  };

  template <>
  struct plotter <62> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <63> {
    constexpr static const char* name = "Electron/charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.charge);
      return output;
    }
  };

  template <>
  struct plotter <64> {
    constexpr static const char* name = "Electron/dxy";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dxy);
      return output;
    }
  };

  template <>
  struct plotter <65> {
    constexpr static const char* name = "Electron/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <66> {
    constexpr static const char* name = "Electron/cutBased_Fall17_V1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_Fall17_V1);
      return output;
    }
  };

  template <>
  struct plotter <67> {
    constexpr static const char* name = "Electron/mvaSpring16HZZ_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16HZZ_WPL);
      return output;
    }
  };

  template <>
  struct plotter <68> {
    constexpr static const char* name = "Electron/pfRelIso03_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pfRelIso03_chg);
      return output;
    }
  };

  template <>
  struct plotter <69> {
    constexpr static const char* name = "Electron/lostHits";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.lostHits);
      return output;
    }
  };

  template <>
  struct plotter <70> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <71> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <72> {
    constexpr static const char* name = "Electron/dxyErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dxyErr);
      return output;
    }
  };

  template <>
  struct plotter <73> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <74> {
    constexpr static const char* name = "Electron/mvaSpring16HZZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16HZZ);
      return output;
    }
  };

  template <>
  struct plotter <75> {
    constexpr static const char* name = "Electron/dr03TkSumPt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03TkSumPt);
      return output;
    }
  };

  template <>
  struct plotter <76> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso);
      return output;
    }
  };

  template <>
  struct plotter <77> {
    constexpr static const char* name = "Electron/mvaTTH";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaTTH);
      return output;
    }
  };

  template <>
  struct plotter <78> {
    constexpr static const char* name = "Electron/ip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.ip3d);
      return output;
    }
  };

  template <>
  struct plotter <79> {
    constexpr static const char* name = "Electron/cutBased_HEEP";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_HEEP);
      return output;
    }
  };

  template <>
  struct plotter <80> {
    constexpr static const char* name = "Electron/isPFcand";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.isPFcand);
      return output;
    }
  };

  template <>
  struct plotter <81> {
    constexpr static const char* name = "Electron/dr03TkSumPtHEEP";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03TkSumPtHEEP);
      return output;
    }
  };

  template <>
  struct plotter <82> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <83> {
    constexpr static const char* name = "Electron/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <84> {
    constexpr static const char* name = "Electron/mvaSpring16GP_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16GP_WP80);
      return output;
    }
  };

  template <>
  struct plotter <85> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <86> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso);
      return output;
    }
  };

  template <>
  struct plotter <87> {
    constexpr static const char* name = "Electron/dr03HcalDepth1TowerSumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03HcalDepth1TowerSumEt);
      return output;
    }
  };

  template <>
  struct plotter <88> {
    constexpr static const char* name = "Electron/miniPFRelIso_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.miniPFRelIso_chg);
      return output;
    }
  };

  template <>
  struct plotter <89> {
    constexpr static const char* name = "Electron/dz";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dz);
      return output;
    }
  };

  template <>
  struct plotter <90> {
    constexpr static const char* name = "Electron/sip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.sip3d);
      return output;
    }
  };

  template <>
  struct plotter <91> {
    constexpr static const char* name = "Electron/vidNestedWPBitmapSpring15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.vidNestedWPBitmapSpring15);
      return output;
    }
  };

  template <>
  struct plotter <92> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <93> {
    constexpr static const char* name = "Electron/mvaSpring16GP";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16GP);
      return output;
    }
  };

  template <>
  struct plotter <94> {
    constexpr static const char* name = "Electron/cutBased";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased);
      return output;
    }
  };

  template <>
  struct plotter <95> {
    constexpr static const char* name = "Electron/deltaEtaSC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.deltaEtaSC);
      return output;
    }
  };

  template <>
  struct plotter <96> {
    constexpr static const char* name = "Electron/miniPFRelIso_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.miniPFRelIso_all);
      return output;
    }
  };

  template <>
  struct plotter <97> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <98> {
    constexpr static const char* name = "Electron/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <99> {
    constexpr static const char* name = "Electron/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <100> {
    constexpr static const char* name = "Electron/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <101> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <102> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <103> {
    constexpr static const char* name = "Electron/genPartIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.genPartIdx);
      return output;
    }
  };

  template <>
  struct plotter <104> {
    constexpr static const char* name = "Electron/jetIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.jetIdx);
      return output;
    }
  };

  template <>
  struct plotter <105> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso);
      return output;
    }
  };

  template <>
  struct plotter <106> {
    constexpr static const char* name = "Muon/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Muon.size())};
      return output;
    }
  };

  template <>
  struct plotter <107> {
    constexpr static const char* name = "Muon/dzErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dzErr);
      return output;
    }
  };

  template <>
  struct plotter <108> {
    constexpr static const char* name = "Muon/pfIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfIsoId);
      return output;
    }
  };

  template <>
  struct plotter <109> {
    constexpr static const char* name = "Muon/dxy";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dxy);
      return output;
    }
  };

  template <>
  struct plotter <110> {
    constexpr static const char* name = "Muon/softMvaId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.softMvaId);
      return output;
    }
  };

  template <>
  struct plotter <111> {
    constexpr static const char* name = "Muon/nStations";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.nStations);
      return output;
    }
  };

  template <>
  struct plotter <112> {
    constexpr static const char* name = "Muon/isGlobal";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.isGlobal);
      return output;
    }
  };

  template <>
  struct plotter <113> {
    constexpr static const char* name = "Muon/pfRelIso03_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfRelIso03_all);
      return output;
    }
  };

  template <>
  struct plotter <114> {
    constexpr static const char* name = "Muon/miniPFRelIso_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.miniPFRelIso_chg);
      return output;
    }
  };

  template <>
  struct plotter <115> {
    constexpr static const char* name = "Muon/tightCharge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.tightCharge);
      return output;
    }
  };

  template <>
  struct plotter <116> {
    constexpr static const char* name = "Muon/jetRelIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.jetRelIso);
      return output;
    }
  };

  template <>
  struct plotter <117> {
    constexpr static const char* name = "Muon/ip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.ip3d);
      return output;
    }
  };

  template <>
  struct plotter <118> {
    constexpr static const char* name = "Muon/triggerIdLoose";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.triggerIdLoose);
      return output;
    }
  };

  template <>
  struct plotter <119> {
    constexpr static const char* name = "Muon/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <120> {
    constexpr static const char* name = "Muon/highPtId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.highPtId);
      return output;
    }
  };

  template <>
  struct plotter <121> {
    constexpr static const char* name = "Muon/pfRelIso03_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfRelIso03_chg);
      return output;
    }
  };

  template <>
  struct plotter <122> {
    constexpr static const char* name = "Muon/dxyErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dxyErr);
      return output;
    }
  };

  template <>
  struct plotter <123> {
    constexpr static const char* name = "Muon/charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.charge);
      return output;
    }
  };

  template <>
  struct plotter <124> {
    constexpr static const char* name = "Muon/inTimeMuon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.inTimeMuon);
      return output;
    }
  };

  template <>
  struct plotter <125> {
    constexpr static const char* name = "Muon/segmentComp";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.segmentComp);
      return output;
    }
  };

  template <>
  struct plotter <126> {
    constexpr static const char* name = "Muon/mvaTTH";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mvaTTH);
      return output;
    }
  };

  template <>
  struct plotter <127> {
    constexpr static const char* name = "Muon/isPFcand";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.isPFcand);
      return output;
    }
  };

  template <>
  struct plotter <128> {
    constexpr static const char* name = "Muon/mediumPromptId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mediumPromptId);
      return output;
    }
  };

  template <>
  struct plotter <129> {
    constexpr static const char* name = "Muon/softId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.softId);
      return output;
    }
  };

  template <>
  struct plotter <130> {
    constexpr static const char* name = "Muon/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <131> {
    constexpr static const char* name = "Muon/looseId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.looseId);
      return output;
    }
  };

  template <>
  struct plotter <132> {
    constexpr static const char* name = "Muon/nTrackerLayers";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.nTrackerLayers);
      return output;
    }
  };

  template <>
  struct plotter <133> {
    constexpr static const char* name = "Muon/dz";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dz);
      return output;
    }
  };

  template <>
  struct plotter <134> {
    constexpr static const char* name = "Muon/isTracker";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.isTracker);
      return output;
    }
  };

  template <>
  struct plotter <135> {
    constexpr static const char* name = "Muon/sip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.sip3d);
      return output;
    }
  };

  template <>
  struct plotter <136> {
    constexpr static const char* name = "Muon/multiIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.multiIsoId);
      return output;
    }
  };

  template <>
  struct plotter <137> {
    constexpr static const char* name = "Muon/tightId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.tightId);
      return output;
    }
  };

  template <>
  struct plotter <138> {
    constexpr static const char* name = "Muon/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <139> {
    constexpr static const char* name = "Muon/pfRelIso04_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfRelIso04_all);
      return output;
    }
  };

  template <>
  struct plotter <140> {
    constexpr static const char* name = "Muon/tkIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.tkIsoId);
      return output;
    }
  };

  template <>
  struct plotter <141> {
    constexpr static const char* name = "Muon/jetIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.jetIdx);
      return output;
    }
  };

  template <>
  struct plotter <142> {
    constexpr static const char* name = "Muon/miniIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.miniIsoId);
      return output;
    }
  };

  template <>
  struct plotter <143> {
    constexpr static const char* name = "Muon/miniPFRelIso_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.miniPFRelIso_all);
      return output;
    }
  };

  template <>
  struct plotter <144> {
    constexpr static const char* name = "Muon/ptErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.ptErr);
      return output;
    }
  };

  template <>
  struct plotter <145> {
    constexpr static const char* name = "Muon/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <146> {
    constexpr static const char* name = "Muon/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <147> {
    constexpr static const char* name = "Muon/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <148> {
    constexpr static const char* name = "Muon/mediumId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mediumId);
      return output;
    }
  };

  template <>
  struct plotter <149> {
    constexpr static const char* name = "Muon/genPartIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.genPartIdx);
      return output;
    }
  };

  template <>
  struct plotter <150> {
    constexpr static const char* name = "Muon/mvaId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mvaId);
      return output;
    }
  };

  template <>
  struct plotter <151> {
    constexpr static const char* name = "Tau/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Tau.size())};
      return output;
    }
  };

  template <>
  struct plotter <152> {
    constexpr static const char* name = "Tau/rawIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.rawIso);
      return output;
    }
  };

  template <>
  struct plotter <153> {
    constexpr static const char* name = "Tau/dxy";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.dxy);
      return output;
    }
  };

  template <>
  struct plotter <154> {
    constexpr static const char* name = "Tau/leadTkDeltaPhi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.leadTkDeltaPhi);
      return output;
    }
  };

  template <>
  struct plotter <155> {
    constexpr static const char* name = "Tau/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <156> {
    constexpr static const char* name = "Tau/idDecayMode";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.idDecayMode);
      return output;
    }
  };

  template <>
  struct plotter <157> {
    constexpr static const char* name = "Tau/genPartIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.genPartIdx);
      return output;
    }
  };

  template <>
  struct plotter <158> {
    constexpr static const char* name = "Tau/chargedIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.chargedIso);
      return output;
    }
  };

  template <>
  struct plotter <159> {
    constexpr static const char* name = "Tau/neutralIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.neutralIso);
      return output;
    }
  };

  template <>
  struct plotter <160> {
    constexpr static const char* name = "Tau/leadTkDeltaEta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.leadTkDeltaEta);
      return output;
    }
  };

  template <>
  struct plotter <161> {
    constexpr static const char* name = "Tau/rawIsodR03";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.rawIsodR03);
      return output;
    }
  };

  template <>
  struct plotter <162> {
    constexpr static const char* name = "Tau/decayMode";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.decayMode);
      return output;
    }
  };

  template <>
  struct plotter <163> {
    constexpr static const char* name = "Tau/puCorr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.puCorr);
      return output;
    }
  };

  template <>
  struct plotter <164> {
    constexpr static const char* name = "Tau/charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.charge);
      return output;
    }
  };

  template <>
  struct plotter <165> {
    constexpr static const char* name = "Tau/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <166> {
    constexpr static const char* name = "Tau/idMVAnewDM2017v2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.idMVAnewDM2017v2);
      return output;
    }
  };

  template <>
  struct plotter <167> {
    constexpr static const char* name = "Tau/idMVAoldDM2017v2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.idMVAoldDM2017v2);
      return output;
    }
  };

  template <>
  struct plotter <168> {
    constexpr static const char* name = "Tau/leadTkPtOverTauPt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.leadTkPtOverTauPt);
      return output;
    }
  };

  template <>
  struct plotter <169> {
    constexpr static const char* name = "Tau/photonsOutsideSignalCone";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.photonsOutsideSignalCone);
      return output;
    }
  };

  template <>
  struct plotter <170> {
    constexpr static const char* name = "Tau/dz";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.dz);
      return output;
    }
  };

  template <>
  struct plotter <171> {
    constexpr static const char* name = "Tau/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <172> {
    constexpr static const char* name = "Tau/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <173> {
    constexpr static const char* name = "Tau/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <174> {
    constexpr static const char* name = "Tau/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <175> {
    constexpr static const char* name = "Tau/jetIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.jetIdx);
      return output;
    }
  };

  template <>
  struct plotter <176> {
    constexpr static const char* name = "Tau/idDecayModeNewDMs";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Tau)
        output.push_back(i.idDecayModeNewDMs);
      return output;
    }
  };

  template <>
  struct plotter <177> {
    constexpr static const char* name = "Jet/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Jet.size())};
      return output;
    }
  };

  template <>
  struct plotter <178> {
    constexpr static const char* name = "Jet/btagCMVA";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagCMVA);
      return output;
    }
  };

  template <>
  struct plotter <179> {
    constexpr static const char* name = "Jet/partonFlavour";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.partonFlavour);
      return output;
    }
  };

  template <>
  struct plotter <180> {
    constexpr static const char* name = "Jet/bRegRes";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.bRegRes);
      return output;
    }
  };

  template <>
  struct plotter <181> {
    constexpr static const char* name = "Jet/btagDeepFlavB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagDeepFlavB);
      return output;
    }
  };

  template <>
  struct plotter <182> {
    constexpr static const char* name = "Jet/area";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.area);
      return output;
    }
  };

  template <>
  struct plotter <183> {
    constexpr static const char* name = "Jet/chEmEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.chEmEF);
      return output;
    }
  };

  template <>
  struct plotter <184> {
    constexpr static const char* name = "Jet/chHEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.chHEF);
      return output;
    }
  };

  template <>
  struct plotter <185> {
    constexpr static const char* name = "Jet/qgl";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.qgl);
      return output;
    }
  };

  template <>
  struct plotter <186> {
    constexpr static const char* name = "Jet/l1fac";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.l1fac);
      return output;
    }
  };

  template <>
  struct plotter <187> {
    constexpr static const char* name = "Jet/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <188> {
    constexpr static const char* name = "Jet/muEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.muEF);
      return output;
    }
  };

  template <>
  struct plotter <189> {
    constexpr static const char* name = "Jet/electronIdx1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.electronIdx1);
      return output;
    }
  };

  template <>
  struct plotter <190> {
    constexpr static const char* name = "Jet/electronIdx2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.electronIdx2);
      return output;
    }
  };

  template <>
  struct plotter <191> {
    constexpr static const char* name = "Jet/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <192> {
    constexpr static const char* name = "Jet/bRegCorr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.bRegCorr);
      return output;
    }
  };

  template <>
  struct plotter <193> {
    constexpr static const char* name = "Jet/puId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.puId);
      return output;
    }
  };

  template <>
  struct plotter <194> {
    constexpr static const char* name = "Jet/jetId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.jetId);
      return output;
    }
  };

  template <>
  struct plotter <195> {
    constexpr static const char* name = "Jet/neEmEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.neEmEF);
      return output;
    }
  };

  template <>
  struct plotter <196> {
    constexpr static const char* name = "Jet/btagDeepC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagDeepC);
      return output;
    }
  };

  template <>
  struct plotter <197> {
    constexpr static const char* name = "Jet/btagDeepB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagDeepB);
      return output;
    }
  };

  template <>
  struct plotter <198> {
    constexpr static const char* name = "Jet/nElectrons";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.nElectrons);
      return output;
    }
  };

  template <>
  struct plotter <199> {
    constexpr static const char* name = "Jet/neHEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.neHEF);
      return output;
    }
  };

  template <>
  struct plotter <200> {
    constexpr static const char* name = "Jet/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <201> {
    constexpr static const char* name = "Jet/nMuons";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.nMuons);
      return output;
    }
  };

  template <>
  struct plotter <202> {
    constexpr static const char* name = "Jet/btagCSVV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagCSVV2);
      return output;
    }
  };

  template <>
  struct plotter <203> {
    constexpr static const char* name = "Jet/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <204> {
    constexpr static const char* name = "Jet/rawFactor";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.rawFactor);
      return output;
    }
  };

  template <>
  struct plotter <205> {
    constexpr static const char* name = "Jet/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <206> {
    constexpr static const char* name = "Jet/muonIdx2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.muonIdx2);
      return output;
    }
  };

  template <>
  struct plotter <207> {
    constexpr static const char* name = "Jet/muonIdx1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.muonIdx1);
      return output;
    }
  };

  template <>
  struct plotter <208> {
    constexpr static const char* name = "Jet/muonSubtrFactor";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.muonSubtrFactor);
      return output;
    }
  };

  template <>
  struct plotter <209> {
    constexpr static const char* name = "Jet/nConstituents";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.nConstituents);
      return output;
    }
  };

  template <>
  struct plotter <210> {
    constexpr static const char* name = "Photon/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Photon.size())};
      return output;
    }
  };

  template <>
  struct plotter <211> {
    constexpr static const char* name = "Photon/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <212> {
    constexpr static const char* name = "Photon/pfRelIso03_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pfRelIso03_all);
      return output;
    }
  };

  template <>
  struct plotter <213> {
    constexpr static const char* name = "Photon/genPartIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.genPartIdx);
      return output;
    }
  };

  template <>
  struct plotter <214> {
    constexpr static const char* name = "Photon/isScEtaEE";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.isScEtaEE);
      return output;
    }
  };

  template <>
  struct plotter <215> {
    constexpr static const char* name = "Photon/isScEtaEB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.isScEtaEB);
      return output;
    }
  };

  template <>
  struct plotter <216> {
    constexpr static const char* name = "Photon/mvaIDV1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaIDV1);
      return output;
    }
  };

  template <>
  struct plotter <217> {
    constexpr static const char* name = "Photon/mvaID_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID_WP90);
      return output;
    }
  };

  template <>
  struct plotter <218> {
    constexpr static const char* name = "Photon/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <219> {
    constexpr static const char* name = "Photon/pfRelIso03_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pfRelIso03_chg);
      return output;
    }
  };

  template <>
  struct plotter <220> {
    constexpr static const char* name = "Photon/charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.charge);
      return output;
    }
  };

  template <>
  struct plotter <221> {
    constexpr static const char* name = "Photon/cutBasedBitmap";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.cutBasedBitmap);
      return output;
    }
  };

  template <>
  struct plotter <222> {
    constexpr static const char* name = "Photon/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <223> {
    constexpr static const char* name = "Photon/mvaID_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID_WP80);
      return output;
    }
  };

  template <>
  struct plotter <224> {
    constexpr static const char* name = "Photon/mvaID";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID);
      return output;
    }
  };

  template <>
  struct plotter <225> {
    constexpr static const char* name = "Photon/electronIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.electronIdx);
      return output;
    }
  };

  template <>
  struct plotter <226> {
    constexpr static const char* name = "Photon/pixelSeed";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pixelSeed);
      return output;
    }
  };

  template <>
  struct plotter <227> {
    constexpr static const char* name = "Photon/cutBased";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.cutBased);
      return output;
    }
  };

  template <>
  struct plotter <228> {
    constexpr static const char* name = "Photon/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <229> {
    constexpr static const char* name = "Photon/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <230> {
    constexpr static const char* name = "Photon/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <231> {
    constexpr static const char* name = "Photon/electronVeto";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.electronVeto);
      return output;
    }
  };

  template <>
  struct plotter <232> {
    constexpr static const char* name = "Photon/jetIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.jetIdx);
      return output;
    }
  };

  template <>
  struct plotter <233> {
    constexpr static const char* name = "SV/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.SV.size())};
      return output;
    }
  };

  template <>
  struct plotter <234> {
    constexpr static const char* name = "SV/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <235> {
    constexpr static const char* name = "SV/dlen";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.dlen);
      return output;
    }
  };

  template <>
  struct plotter <236> {
    constexpr static const char* name = "SV/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <237> {
    constexpr static const char* name = "SV/chi2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.chi2);
      return output;
    }
  };

  template <>
  struct plotter <238> {
    constexpr static const char* name = "SV/dlenSig";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.dlenSig);
      return output;
    }
  };

  template <>
  struct plotter <239> {
    constexpr static const char* name = "SV/ndof";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.ndof);
      return output;
    }
  };

  template <>
  struct plotter <240> {
    constexpr static const char* name = "SV/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <241> {
    constexpr static const char* name = "SV/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <242> {
    constexpr static const char* name = "SV/pAngle";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.pAngle);
      return output;
    }
  };

  template <>
  struct plotter <243> {
    constexpr static const char* name = "SV/y";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.y);
      return output;
    }
  };

  template <>
  struct plotter <244> {
    constexpr static const char* name = "SV/x";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.x);
      return output;
    }
  };

  template <>
  struct plotter <245> {
    constexpr static const char* name = "SV/z";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.z);
      return output;
    }
  };

  template <>
  struct plotter <246> {
    constexpr static const char* name = "FatJet/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.FatJet.size())};
      return output;
    }
  };

  template <>
  struct plotter <247> {
    constexpr static const char* name = "FatJet/deepTagMD_ccvsLight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_ccvsLight);
      return output;
    }
  };

  template <>
  struct plotter <248> {
    constexpr static const char* name = "FatJet/deepTag_QCDothers";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_QCDothers);
      return output;
    }
  };

  template <>
  struct plotter <249> {
    constexpr static const char* name = "FatJet/deepTagMD_HbbvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_HbbvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <250> {
    constexpr static const char* name = "FatJet/btagCSVV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagCSVV2);
      return output;
    }
  };

  template <>
  struct plotter <251> {
    constexpr static const char* name = "FatJet/subJetIdx2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.subJetIdx2);
      return output;
    }
  };

  template <>
  struct plotter <252> {
    constexpr static const char* name = "FatJet/subJetIdx1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.subJetIdx1);
      return output;
    }
  };

  template <>
  struct plotter <253> {
    constexpr static const char* name = "FatJet/deepTag_WvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_WvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <254> {
    constexpr static const char* name = "FatJet/btagHbb";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagHbb);
      return output;
    }
  };

  template <>
  struct plotter <255> {
    constexpr static const char* name = "FatJet/deepTagMD_bbvsLight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_bbvsLight);
      return output;
    }
  };

  template <>
  struct plotter <256> {
    constexpr static const char* name = "FatJet/deepTag_ZvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_ZvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <257> {
    constexpr static const char* name = "FatJet/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <258> {
    constexpr static const char* name = "FatJet/area";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.area);
      return output;
    }
  };

  template <>
  struct plotter <259> {
    constexpr static const char* name = "FatJet/n2b1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.n2b1);
      return output;
    }
  };

  template <>
  struct plotter <260> {
    constexpr static const char* name = "FatJet/n3b1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.n3b1);
      return output;
    }
  };

  template <>
  struct plotter <261> {
    constexpr static const char* name = "FatJet/tau2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.tau2);
      return output;
    }
  };

  template <>
  struct plotter <262> {
    constexpr static const char* name = "FatJet/tau3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.tau3);
      return output;
    }
  };

  template <>
  struct plotter <263> {
    constexpr static const char* name = "FatJet/deepTag_H";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_H);
      return output;
    }
  };

  template <>
  struct plotter <264> {
    constexpr static const char* name = "FatJet/tau1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.tau1);
      return output;
    }
  };

  template <>
  struct plotter <265> {
    constexpr static const char* name = "FatJet/deepTagMD_WvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_WvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <266> {
    constexpr static const char* name = "FatJet/btagDDCvB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagDDCvB);
      return output;
    }
  };

  template <>
  struct plotter <267> {
    constexpr static const char* name = "FatJet/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <268> {
    constexpr static const char* name = "FatJet/tau4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.tau4);
      return output;
    }
  };

  template <>
  struct plotter <269> {
    constexpr static const char* name = "FatJet/deepTagMD_H4qvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_H4qvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <270> {
    constexpr static const char* name = "FatJet/btagDDBvL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagDDBvL);
      return output;
    }
  };

  template <>
  struct plotter <271> {
    constexpr static const char* name = "FatJet/btagDDCvL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagDDCvL);
      return output;
    }
  };

  template <>
  struct plotter <272> {
    constexpr static const char* name = "FatJet/deepTagMD_ZHccvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_ZHccvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <273> {
    constexpr static const char* name = "FatJet/jetId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.jetId);
      return output;
    }
  };

  template <>
  struct plotter <274> {
    constexpr static const char* name = "FatJet/btagDeepB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagDeepB);
      return output;
    }
  };

  template <>
  struct plotter <275> {
    constexpr static const char* name = "FatJet/btagCMVA";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagCMVA);
      return output;
    }
  };

  template <>
  struct plotter <276> {
    constexpr static const char* name = "FatJet/deepTagMD_ZvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_ZvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <277> {
    constexpr static const char* name = "FatJet/deepTag_QCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_QCD);
      return output;
    }
  };

  template <>
  struct plotter <278> {
    constexpr static const char* name = "FatJet/deepTagMD_ZbbvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_ZbbvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <279> {
    constexpr static const char* name = "FatJet/deepTagMD_ZHbbvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_ZHbbvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <280> {
    constexpr static const char* name = "FatJet/deepTagMD_TvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_TvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <281> {
    constexpr static const char* name = "FatJet/deepTag_TvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_TvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <282> {
    constexpr static const char* name = "FatJet/rawFactor";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.rawFactor);
      return output;
    }
  };

  template <>
  struct plotter <283> {
    constexpr static const char* name = "FatJet/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <284> {
    constexpr static const char* name = "FatJet/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <285> {
    constexpr static const char* name = "FatJet/msoftdrop";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.msoftdrop);
      return output;
    }
  };

  template <>
  struct plotter <286> {
    constexpr static const char* name = "SubJet/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.SubJet.size())};
      return output;
    }
  };

  template <>
  struct plotter <287> {
    constexpr static const char* name = "SubJet/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <288> {
    constexpr static const char* name = "SubJet/n2b1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.n2b1);
      return output;
    }
  };

  template <>
  struct plotter <289> {
    constexpr static const char* name = "SubJet/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <290> {
    constexpr static const char* name = "SubJet/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <291> {
    constexpr static const char* name = "SubJet/btagCSVV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.btagCSVV2);
      return output;
    }
  };

  template <>
  struct plotter <292> {
    constexpr static const char* name = "SubJet/n3b1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.n3b1);
      return output;
    }
  };

  template <>
  struct plotter <293> {
    constexpr static const char* name = "SubJet/tau2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.tau2);
      return output;
    }
  };

  template <>
  struct plotter <294> {
    constexpr static const char* name = "SubJet/tau3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.tau3);
      return output;
    }
  };

  template <>
  struct plotter <295> {
    constexpr static const char* name = "SubJet/rawFactor";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.rawFactor);
      return output;
    }
  };

  template <>
  struct plotter <296> {
    constexpr static const char* name = "SubJet/tau1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.tau1);
      return output;
    }
  };

  template <>
  struct plotter <297> {
    constexpr static const char* name = "SubJet/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <298> {
    constexpr static const char* name = "SubJet/tau4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.tau4);
      return output;
    }
  };

  template <>
  struct plotter <299> {
    constexpr static const char* name = "SubJet/btagDeepB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.btagDeepB);
      return output;
    }
  };

  template <>
  struct plotter <300> {
    constexpr static const char* name = "SubJet/btagCMVA";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.btagCMVA);
      return output;
    }
  };

  template <>
  struct plotter <301> {
    constexpr static const char* name = "GenJet/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.GenJet.size())};
      return output;
    }
  };

  template <>
  struct plotter <302> {
    constexpr static const char* name = "GenJet/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenJet)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <303> {
    constexpr static const char* name = "GenJet/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenJet)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <304> {
    constexpr static const char* name = "GenJet/hadronFlavour";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenJet)
        output.push_back(i.hadronFlavour);
      return output;
    }
  };

  template <>
  struct plotter <305> {
    constexpr static const char* name = "GenJet/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenJet)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <306> {
    constexpr static const char* name = "GenJet/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenJet)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <307> {
    constexpr static const char* name = "GenJet/partonFlavour";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenJet)
        output.push_back(i.partonFlavour);
      return output;
    }
  };

  template <>
  struct plotter <308> {
    constexpr static const char* name = "LHEPdfWeight/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.LHEPdfWeight.size())};
      return output;
    }
  };

  template <>
  struct plotter <309> {
    constexpr static const char* name = "LHEPdfWeight/VAL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.LHEPdfWeight)
        output.push_back(i.VAL);
      return output;
    }
  };

  template <>
  struct plotter <310> {
    constexpr static const char* name = "LHEReweightingWeight/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.LHEReweightingWeight.size())};
      return output;
    }
  };

  template <>
  struct plotter <311> {
    constexpr static const char* name = "LHEReweightingWeight/VAL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.LHEReweightingWeight)
        output.push_back(i.VAL);
      return output;
    }
  };

  template <>
  struct plotter <312> {
    constexpr static const char* name = "LHEScaleWeight/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.LHEScaleWeight.size())};
      return output;
    }
  };

  template <>
  struct plotter <313> {
    constexpr static const char* name = "LHEScaleWeight/VAL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.LHEScaleWeight)
        output.push_back(i.VAL);
      return output;
    }
  };

  template <>
  struct plotter <314> {
    constexpr static const char* name = "PSWeight/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PSWeight.size())};
      return output;
    }
  };

  template <>
  struct plotter <315> {
    constexpr static const char* name = "PSWeight/VAL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.PSWeight)
        output.push_back(i.VAL);
      return output;
    }
  };

  template <>
  struct plotter <316> {
    constexpr static const char* name = "PV/chi2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.chi2)};
      return output;
    }
  };

  template <>
  struct plotter <317> {
    constexpr static const char* name = "PV/ndof";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.ndof)};
      return output;
    }
  };

  template <>
  struct plotter <318> {
    constexpr static const char* name = "PV/score";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.score)};
      return output;
    }
  };

  template <>
  struct plotter <319> {
    constexpr static const char* name = "PV/npvsGood";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.npvsGood)};
      return output;
    }
  };

  template <>
  struct plotter <320> {
    constexpr static const char* name = "PV/y";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.y)};
      return output;
    }
  };

  template <>
  struct plotter <321> {
    constexpr static const char* name = "PV/x";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.x)};
      return output;
    }
  };

  template <>
  struct plotter <322> {
    constexpr static const char* name = "PV/z";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.z)};
      return output;
    }
  };

  template <>
  struct plotter <323> {
    constexpr static const char* name = "PV/npvs";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.npvs)};
      return output;
    }
  };

  template <>
  struct plotter <324> {
    constexpr static const char* name = "GenMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.GenMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <325> {
    constexpr static const char* name = "GenMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.GenMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <326> {
    constexpr static const char* name = "CaloMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.CaloMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <327> {
    constexpr static const char* name = "CaloMET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.CaloMET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <328> {
    constexpr static const char* name = "CaloMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.CaloMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <329> {
    constexpr static const char* name = "CaloMET/significance";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.CaloMET.significance)};
      return output;
    }
  };

  template <>
  struct plotter <330> {
    constexpr static const char* name = "ChsMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.ChsMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <331> {
    constexpr static const char* name = "ChsMET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.ChsMET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <332> {
    constexpr static const char* name = "ChsMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.ChsMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <333> {
    constexpr static const char* name = "ChsMET/significance";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.ChsMET.significance)};
      return output;
    }
  };

  template <>
  struct plotter <334> {
    constexpr static const char* name = "MET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.MET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <335> {
    constexpr static const char* name = "MET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.MET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <336> {
    constexpr static const char* name = "MET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.MET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <337> {
    constexpr static const char* name = "MET/significance";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.MET.significance)};
      return output;
    }
  };

  template <>
  struct plotter <338> {
    constexpr static const char* name = "PuppiMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PuppiMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <339> {
    constexpr static const char* name = "PuppiMET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PuppiMET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <340> {
    constexpr static const char* name = "PuppiMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PuppiMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <341> {
    constexpr static const char* name = "PuppiMET/significance";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PuppiMET.significance)};
      return output;
    }
  };

  template <>
  struct plotter <342> {
    constexpr static const char* name = "RawMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.RawMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <343> {
    constexpr static const char* name = "RawMET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.RawMET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <344> {
    constexpr static const char* name = "RawMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.RawMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <345> {
    constexpr static const char* name = "RawMET/significance";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.RawMET.significance)};
      return output;
    }
  };

  template <>
  struct plotter <346> {
    constexpr static const char* name = "TkMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.TkMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <347> {
    constexpr static const char* name = "TkMET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.TkMET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <348> {
    constexpr static const char* name = "TkMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.TkMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <349> {
    constexpr static const char* name = "TkMET/significance";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.TkMET.significance)};
      return output;
    }
  };

  template <>
  struct plotter <350> {
    constexpr static const char* name = "HLT/Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <351> {
    constexpr static const char* name = "HLT/SinglePhoton30_Eta3p1ForPPRef";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.SinglePhoton30_Eta3p1ForPPRef)};
      return output;
    }
  };

  template <>
  struct plotter <352> {
    constexpr static const char* name = "HLT/Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5)};
      return output;
    }
  };

  template <>
  struct plotter <353> {
    constexpr static const char* name = "HLT/PFMET200_HBHE_BeamHaloCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET200_HBHE_BeamHaloCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <354> {
    constexpr static const char* name = "HLT/AK4CaloJet80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4CaloJet80)};
      return output;
    }
  };

  template <>
  struct plotter <355> {
    constexpr static const char* name = "HLT/Mu12_DoublePFJets200_CaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_DoublePFJets200_CaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <356> {
    constexpr static const char* name = "HLT/Dimuon0_LowMass_L1_TM530";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_LowMass_L1_TM530)};
      return output;
    }
  };

  template <>
  struct plotter <357> {
    constexpr static const char* name = "HLT/Mu23_Mu12_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu23_Mu12_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <358> {
    constexpr static const char* name = "HLT/Ele30_WPTight_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele30_WPTight_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <359> {
    constexpr static const char* name = "HLT/BTagMu_AK8DiJet170_Mu5_noalgo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK8DiJet170_Mu5_noalgo)};
      return output;
    }
  };

  template <>
  struct plotter <360> {
    constexpr static const char* name = "HLT/DiPFJetAve400";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve400)};
      return output;
    }
  };

  template <>
  struct plotter <361> {
    constexpr static const char* name = "HLT/Mu12";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12)};
      return output;
    }
  };

  template <>
  struct plotter <362> {
    constexpr static const char* name = "HLT/AK8PFHT900_TrimMass50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFHT900_TrimMass50)};
      return output;
    }
  };

  template <>
  struct plotter <363> {
    constexpr static const char* name = "HLT/Photon75";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon75)};
      return output;
    }
  };

  template <>
  struct plotter <364> {
    constexpr static const char* name = "HLT/AK8PFHT800_TrimMass50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFHT800_TrimMass50)};
      return output;
    }
  };

  template <>
  struct plotter <365> {
    constexpr static const char* name = "HLT/Mu19";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu19)};
      return output;
    }
  };

  template <>
  struct plotter <366> {
    constexpr static const char* name = "HLT/IsoMu30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu30)};
      return output;
    }
  };

  template <>
  struct plotter <367> {
    constexpr static const char* name = "HLT/DoubleMu4_JpsiTrk_Displaced";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu4_JpsiTrk_Displaced)};
      return output;
    }
  };

  template <>
  struct plotter <368> {
    constexpr static const char* name = "HLT/UncorrectedJetE70_NoBPTX3BX";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.UncorrectedJetE70_NoBPTX3BX)};
      return output;
    }
  };

  template <>
  struct plotter <369> {
    constexpr static const char* name = "HLT/CaloMET100_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET100_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <370> {
    constexpr static const char* name = "HLT/Ele115_CaloIdVT_GsfTrkIdT";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele115_CaloIdVT_GsfTrkIdT)};
      return output;
    }
  };

  template <>
  struct plotter <371> {
    constexpr static const char* name = "HLT/TkMu100";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TkMu100)};
      return output;
    }
  };

  template <>
  struct plotter <372> {
    constexpr static const char* name = "HLT/IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1)};
      return output;
    }
  };

  template <>
  struct plotter <373> {
    constexpr static const char* name = "HLT/AK4CaloJet120";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4CaloJet120)};
      return output;
    }
  };

  template <>
  struct plotter <374> {
    constexpr static const char* name = "HLT/TrkMu6NoFiltersNoVtx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TrkMu6NoFiltersNoVtx)};
      return output;
    }
  };

  template <>
  struct plotter <375> {
    constexpr static const char* name = "HLT/DoubleMu20_7_Mass0to30_L1_DM4EG";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu20_7_Mass0to30_L1_DM4EG)};
      return output;
    }
  };

  template <>
  struct plotter <376> {
    constexpr static const char* name = "HLT/Photon110EB_TightID_TightIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon110EB_TightID_TightIso)};
      return output;
    }
  };

  template <>
  struct plotter <377> {
    constexpr static const char* name = "HLT/Mu30_TkMu0_Upsilon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu30_TkMu0_Upsilon)};
      return output;
    }
  };

  template <>
  struct plotter <378> {
    constexpr static const char* name = "HLT/TripleMu_10_5_5_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TripleMu_10_5_5_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <379> {
    constexpr static const char* name = "HLT/DoubleL2Mu30NoVtx_2Cha_Eta2p4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu30NoVtx_2Cha_Eta2p4)};
      return output;
    }
  };

  template <>
  struct plotter <380> {
    constexpr static const char* name = "HLT/Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <381> {
    constexpr static const char* name = "HLT/Ele50_IsoVVVL_PFHT450";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele50_IsoVVVL_PFHT450)};
      return output;
    }
  };

  template <>
  struct plotter <382> {
    constexpr static const char* name = "HLT/IsoMu27_MET90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu27_MET90)};
      return output;
    }
  };

  template <>
  struct plotter <383> {
    constexpr static const char* name = "HLT/AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4)};
      return output;
    }
  };

  template <>
  struct plotter <384> {
    constexpr static const char* name = "HLT/ZeroBias_part0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_part0)};
      return output;
    }
  };

  template <>
  struct plotter <385> {
    constexpr static const char* name = "HLT/AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2)};
      return output;
    }
  };

  template <>
  struct plotter <386> {
    constexpr static const char* name = "HLT/Dimuon24_Phi_noCorrL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon24_Phi_noCorrL1)};
      return output;
    }
  };

  template <>
  struct plotter <387> {
    constexpr static const char* name = "HLT/AK8PFJet450";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet450)};
      return output;
    }
  };

  template <>
  struct plotter <388> {
    constexpr static const char* name = "HLT/Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30)};
      return output;
    }
  };

  template <>
  struct plotter <389> {
    constexpr static const char* name = "HLT/CaloMET300_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET300_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <390> {
    constexpr static const char* name = "HLT/Mu7p5_Track7_Jpsi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7p5_Track7_Jpsi)};
      return output;
    }
  };

  template <>
  struct plotter <391> {
    constexpr static const char* name = "HLT/Photon100EB_TightID_TightIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon100EB_TightID_TightIso)};
      return output;
    }
  };

  template <>
  struct plotter <392> {
    constexpr static const char* name = "HLT/DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350)};
      return output;
    }
  };

  template <>
  struct plotter <393> {
    constexpr static const char* name = "HLT/RsqMR300_Rsq0p09_MR200_4jet";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.RsqMR300_Rsq0p09_MR200_4jet)};
      return output;
    }
  };

  template <>
  struct plotter <394> {
    constexpr static const char* name = "HLT/DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg)};
      return output;
    }
  };

  template <>
  struct plotter <395> {
    constexpr static const char* name = "HLT/Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto)};
      return output;
    }
  };

  template <>
  struct plotter <396> {
    constexpr static const char* name = "HLT/DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg)};
      return output;
    }
  };

  template <>
  struct plotter <397> {
    constexpr static const char* name = "HLT/PFHT330PT30_QuadPFJet_75_60_45_40";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT330PT30_QuadPFJet_75_60_45_40)};
      return output;
    }
  };

  template <>
  struct plotter <398> {
    constexpr static const char* name = "HLT/PFJetFwd450";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd450)};
      return output;
    }
  };

  template <>
  struct plotter <399> {
    constexpr static const char* name = "HLT/DoubleL2Mu25NoVtx_2Cha_CosmicSeed";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu25NoVtx_2Cha_CosmicSeed)};
      return output;
    }
  };

  template <>
  struct plotter <400> {
    constexpr static const char* name = "HLT/SinglePhoton20_Eta3p1ForPPRef";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.SinglePhoton20_Eta3p1ForPPRef)};
      return output;
    }
  };

  template <>
  struct plotter <401> {
    constexpr static const char* name = "HLT/DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg)};
      return output;
    }
  };

  template <>
  struct plotter <402> {
    constexpr static const char* name = "HLT/PFJet200";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet200)};
      return output;
    }
  };

  template <>
  struct plotter <403> {
    constexpr static const char* name = "HLT/Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60)};
      return output;
    }
  };

  template <>
  struct plotter <404> {
    constexpr static const char* name = "HLT/Dimuon0_Upsilon_NoVertexing";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Upsilon_NoVertexing)};
      return output;
    }
  };

  template <>
  struct plotter <405> {
    constexpr static const char* name = "HLT/DoubleEle27_CaloIdL_MW";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleEle27_CaloIdL_MW)};
      return output;
    }
  };

  template <>
  struct plotter <406> {
    constexpr static const char* name = "HLT/AK8PFJet200";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet200)};
      return output;
    }
  };

  template <>
  struct plotter <407> {
    constexpr static const char* name = "HLT/Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50)};
      return output;
    }
  };

  template <>
  struct plotter <408> {
    constexpr static const char* name = "HLT/Ele15_IsoVVVL_PFHT600";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele15_IsoVVVL_PFHT600)};
      return output;
    }
  };

  template <>
  struct plotter <409> {
    constexpr static const char* name = "HLT/PFJetFwd60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd60)};
      return output;
    }
  };

  template <>
  struct plotter <410> {
    constexpr static const char* name = "HLT/CaloMET100_NotCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET100_NotCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <411> {
    constexpr static const char* name = "HLT/IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr)};
      return output;
    }
  };

  template <>
  struct plotter <412> {
    constexpr static const char* name = "HLT/Dimuon18_PsiPrime_noCorrL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon18_PsiPrime_noCorrL1)};
      return output;
    }
  };

  template <>
  struct plotter <413> {
    constexpr static const char* name = "HLT/Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55)};
      return output;
    }
  };

  template <>
  struct plotter <414> {
    constexpr static const char* name = "HLT/PFJet140";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet140)};
      return output;
    }
  };

  template <>
  struct plotter <415> {
    constexpr static const char* name = "HLT/Mu9_IP6_part1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP6_part1)};
      return output;
    }
  };

  template <>
  struct plotter <416> {
    constexpr static const char* name = "HLT/Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55)};
      return output;
    }
  };

  template <>
  struct plotter <417> {
    constexpr static const char* name = "HLT/Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <418> {
    constexpr static const char* name = "HLT/IsoMu24_TwoProngs35";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu24_TwoProngs35)};
      return output;
    }
  };

  template <>
  struct plotter <419> {
    constexpr static const char* name = "HLT/DoubleL2Mu23NoVtx_2Cha";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu23NoVtx_2Cha)};
      return output;
    }
  };

  template <>
  struct plotter <420> {
    constexpr static const char* name = "HLT/Mu17";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17)};
      return output;
    }
  };

  template <>
  struct plotter <421> {
    constexpr static const char* name = "HLT/Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60)};
      return output;
    }
  };

  template <>
  struct plotter <422> {
    constexpr static const char* name = "HLT/Trimuon5_3p5_2_Upsilon_Muon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Trimuon5_3p5_2_Upsilon_Muon)};
      return output;
    }
  };

  template <>
  struct plotter <423> {
    constexpr static const char* name = "HLT/DiSC30_18_EIso_AND_HE_Mass70";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiSC30_18_EIso_AND_HE_Mass70)};
      return output;
    }
  };

  template <>
  struct plotter <424> {
    constexpr static const char* name = "HLT/L1ETMHadSeeds";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L1ETMHadSeeds)};
      return output;
    }
  };

  template <>
  struct plotter <425> {
    constexpr static const char* name = "HLT/PFJetFwd15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd15)};
      return output;
    }
  };

  template <>
  struct plotter <426> {
    constexpr static const char* name = "HLT/Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL)};
      return output;
    }
  };

  template <>
  struct plotter <427> {
    constexpr static const char* name = "HLT/L1UnpairedBunchBptxMinus";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L1UnpairedBunchBptxMinus)};
      return output;
    }
  };

  template <>
  struct plotter <428> {
    constexpr static const char* name = "HLT/PFMET200_NotCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET200_NotCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <429> {
    constexpr static const char* name = "HLT/Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <430> {
    constexpr static const char* name = "HLT/Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8)};
      return output;
    }
  };

  template <>
  struct plotter <431> {
    constexpr static const char* name = "HLT/AK8PFJetFwd450";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd450)};
      return output;
    }
  };

  template <>
  struct plotter <432> {
    constexpr static const char* name = "HLT/Ele17_CaloIdM_TrackIdM_PFJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele17_CaloIdM_TrackIdM_PFJet30)};
      return output;
    }
  };

  template <>
  struct plotter <433> {
    constexpr static const char* name = "HLT/AK4CaloJet40";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4CaloJet40)};
      return output;
    }
  };

  template <>
  struct plotter <434> {
    constexpr static const char* name = "HLT/Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <435> {
    constexpr static const char* name = "HLT/DoublePhoton85";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoublePhoton85)};
      return output;
    }
  };

  template <>
  struct plotter <436> {
    constexpr static const char* name = "HLT/Mu8_TrkIsoVVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_TrkIsoVVL)};
      return output;
    }
  };

  template <>
  struct plotter <437> {
    constexpr static const char* name = "HLT/Photon33";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon33)};
      return output;
    }
  };

  template <>
  struct plotter <438> {
    constexpr static const char* name = "HLT/TrimuonOpen_5_3p5_2_Upsilon_Muon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TrimuonOpen_5_3p5_2_Upsilon_Muon)};
      return output;
    }
  };

  template <>
  struct plotter <439> {
    constexpr static const char* name = "HLT/Photon50_R9Id90_HE10_IsoM";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon50_R9Id90_HE10_IsoM)};
      return output;
    }
  };

  template <>
  struct plotter <440> {
    constexpr static const char* name = "HLT/QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2)};
      return output;
    }
  };

  template <>
  struct plotter <441> {
    constexpr static const char* name = "HLT/PFJet40";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet40)};
      return output;
    }
  };

  template <>
  struct plotter <442> {
    constexpr static const char* name = "HLT/Dimuon0_Jpsi_NoVertexing";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Jpsi_NoVertexing)};
      return output;
    }
  };

  template <>
  struct plotter <443> {
    constexpr static const char* name = "HLT/Photon100EBHE10";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon100EBHE10)};
      return output;
    }
  };

  template <>
  struct plotter <444> {
    constexpr static const char* name = "HLT/Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <445> {
    constexpr static const char* name = "HLT/DoubleMu3_DZ_PFMET90_PFMHT90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu3_DZ_PFMET90_PFMHT90)};
      return output;
    }
  };

  template <>
  struct plotter <446> {
    constexpr static const char* name = "HLT/Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1)};
      return output;
    }
  };

  template <>
  struct plotter <447> {
    constexpr static const char* name = "HLT/AK4CaloJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4CaloJet30)};
      return output;
    }
  };

  template <>
  struct plotter <448> {
    constexpr static const char* name = "HLT/CaloMET80_NotCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET80_NotCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <449> {
    constexpr static const char* name = "HLT/Ele15_IsoVVVL_PFHT450";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele15_IsoVVVL_PFHT450)};
      return output;
    }
  };

  template <>
  struct plotter <450> {
    constexpr static const char* name = "HLT/Mu23_Mu12";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu23_Mu12)};
      return output;
    }
  };

  template <>
  struct plotter <451> {
    constexpr static const char* name = "HLT/OldMu100";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.OldMu100)};
      return output;
    }
  };

  template <>
  struct plotter <452> {
    constexpr static const char* name = "HLT/L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142)};
      return output;
    }
  };

  template <>
  struct plotter <453> {
    constexpr static const char* name = "HLT/Photon200";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon200)};
      return output;
    }
  };

  template <>
  struct plotter <454> {
    constexpr static const char* name = "HLT/L2Mu45_NoVertex_3Sta_NoBPTX3BX";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L2Mu45_NoVertex_3Sta_NoBPTX3BX)};
      return output;
    }
  };

  template <>
  struct plotter <455> {
    constexpr static const char* name = "HLT/Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8)};
      return output;
    }
  };

  template <>
  struct plotter <456> {
    constexpr static const char* name = "HLT/Mu17_TrkIsoVVL_Mu8_TrkIsoVVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL)};
      return output;
    }
  };

  template <>
  struct plotter <457> {
    constexpr static const char* name = "HLT/AK8PFJet40";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet40)};
      return output;
    }
  };

  template <>
  struct plotter <458> {
    constexpr static const char* name = "HLT/Mu20_Mu10_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu20_Mu10_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <459> {
    constexpr static const char* name = "HLT/Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL)};
      return output;
    }
  };

  template <>
  struct plotter <460> {
    constexpr static const char* name = "HLT/ZeroBias";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias)};
      return output;
    }
  };

  template <>
  struct plotter <461> {
    constexpr static const char* name = "HLT/Ele32_WPTight_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele32_WPTight_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <462> {
    constexpr static const char* name = "HLT/Mu7_IP4_part0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7_IP4_part0)};
      return output;
    }
  };

  template <>
  struct plotter <463> {
    constexpr static const char* name = "HLT/L2Mu10";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L2Mu10)};
      return output;
    }
  };

  template <>
  struct plotter <464> {
    constexpr static const char* name = "HLT/PFHT780";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT780)};
      return output;
    }
  };

  template <>
  struct plotter <465> {
    constexpr static const char* name = "HLT/Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30)};
      return output;
    }
  };

  template <>
  struct plotter <466> {
    constexpr static const char* name = "HLT/DiMu9_Ele9_CaloIdL_TrackIdL_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiMu9_Ele9_CaloIdL_TrackIdL_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <467> {
    constexpr static const char* name = "HLT/AK8PFJet140";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet140)};
      return output;
    }
  };

  template <>
  struct plotter <468> {
    constexpr static const char* name = "HLT/PFMET300_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET300_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <469> {
    constexpr static const char* name = "HLT/Ele16_Ele12_Ele8_CaloIdL_TrackIdL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele16_Ele12_Ele8_CaloIdL_TrackIdL)};
      return output;
    }
  };

  template <>
  struct plotter <470> {
    constexpr static const char* name = "HLT/Mu20";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu20)};
      return output;
    }
  };

  template <>
  struct plotter <471> {
    constexpr static const char* name = "HLT/Ele23_Ele12_CaloIdL_TrackIdL_IsoVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele23_Ele12_CaloIdL_TrackIdL_IsoVL)};
      return output;
    }
  };

  template <>
  struct plotter <472> {
    constexpr static const char* name = "HLT/Mu27";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu27)};
      return output;
    }
  };

  template <>
  struct plotter <473> {
    constexpr static const char* name = "HLT/DoubleMu4_PsiPrimeTrk_Displaced";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu4_PsiPrimeTrk_Displaced)};
      return output;
    }
  };

  template <>
  struct plotter <474> {
    constexpr static const char* name = "HLT/Dimuon0_Upsilon_L1_4p5NoOS";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Upsilon_L1_4p5NoOS)};
      return output;
    }
  };

  template <>
  struct plotter <475> {
    constexpr static const char* name = "HLT/DiPFJetAve500";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve500)};
      return output;
    }
  };

  template <>
  struct plotter <476> {
    constexpr static const char* name = "HLT/Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <477> {
    constexpr static const char* name = "HLT/PFHT450_SixPFJet36";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT450_SixPFJet36)};
      return output;
    }
  };

  template <>
  struct plotter <478> {
    constexpr static const char* name = "HLT/Mu37_Ele27_CaloIdL_MW";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu37_Ele27_CaloIdL_MW)};
      return output;
    }
  };

  template <>
  struct plotter <479> {
    constexpr static const char* name = "HLT/IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <480> {
    constexpr static const char* name = "HLT/PFHT1050";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT1050)};
      return output;
    }
  };

  template <>
  struct plotter <481> {
    constexpr static const char* name = "HLT/TrkMu12_DoubleTrkMu5NoFiltersNoVtx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TrkMu12_DoubleTrkMu5NoFiltersNoVtx)};
      return output;
    }
  };

  template <>
  struct plotter <482> {
    constexpr static const char* name = "HLT/AK8PFJet380_TrimMass30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet380_TrimMass30)};
      return output;
    }
  };

  template <>
  struct plotter <483> {
    constexpr static const char* name = "HLT/Dimuon0_LowMass_L1_4R";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_LowMass_L1_4R)};
      return output;
    }
  };

  template <>
  struct plotter <484> {
    constexpr static const char* name = "HLT/Mu8_IP3_part0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP3_part0)};
      return output;
    }
  };

  template <>
  struct plotter <485> {
    constexpr static const char* name = "HLT/Photon100EE_TightID_TightIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon100EE_TightID_TightIso)};
      return output;
    }
  };

  template <>
  struct plotter <486> {
    constexpr static const char* name = "HLT/Mu15_IsoVVVL_PFHT450_PFMET50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu15_IsoVVVL_PFHT450_PFMET50)};
      return output;
    }
  };

  template <>
  struct plotter <487> {
    constexpr static const char* name = "HLT/Mu8_IP3_part3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP3_part3)};
      return output;
    }
  };

  template <>
  struct plotter <488> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130)};
      return output;
    }
  };

  template <>
  struct plotter <489> {
    constexpr static const char* name = "HLT/AK8PFJetFwd80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd80)};
      return output;
    }
  };

  template <>
  struct plotter <490> {
    constexpr static const char* name = "HLT/L2Mu10_NoVertex_NoBPTX";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L2Mu10_NoVertex_NoBPTX)};
      return output;
    }
  };

  template <>
  struct plotter <491> {
    constexpr static const char* name = "HLT/HcalIsolatedbunch";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HcalIsolatedbunch)};
      return output;
    }
  };

  template <>
  struct plotter <492> {
    constexpr static const char* name = "HLT/Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <493> {
    constexpr static const char* name = "HLT/PFHT800_PFMET85_PFMHT85_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT800_PFMET85_PFMHT85_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <494> {
    constexpr static const char* name = "HLT/DiEle27_WPTightCaloOnly_L1DoubleEG";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiEle27_WPTightCaloOnly_L1DoubleEG)};
      return output;
    }
  };

  template <>
  struct plotter <495> {
    constexpr static const char* name = "HLT/Dimuon0_LowMass_L1_0er1p5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_LowMass_L1_0er1p5)};
      return output;
    }
  };

  template <>
  struct plotter <496> {
    constexpr static const char* name = "HLT/DoubleMu4_Mass3p8_DZ_PFHT350";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu4_Mass3p8_DZ_PFHT350)};
      return output;
    }
  };

  template <>
  struct plotter <497> {
    constexpr static const char* name = "HLT/AK4CaloJet100";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4CaloJet100)};
      return output;
    }
  };

  template <>
  struct plotter <498> {
    constexpr static const char* name = "HLT/Mu20_Mu10_SameSign";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu20_Mu10_SameSign)};
      return output;
    }
  };

  template <>
  struct plotter <499> {
    constexpr static const char* name = "HLT/Mu3_PFJet40";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu3_PFJet40)};
      return output;
    }
  };

  template <>
  struct plotter <500> {
    constexpr static const char* name = "HLT/Photon120EB_TightID_TightIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon120EB_TightID_TightIso)};
      return output;
    }
  };

  template <>
  struct plotter <501> {
    constexpr static const char* name = "HLT/DoubleMu3_Trk_Tau3mu";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu3_Trk_Tau3mu)};
      return output;
    }
  };

  template <>
  struct plotter <502> {
    constexpr static const char* name = "HLT/Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30)};
      return output;
    }
  };

  template <>
  struct plotter <503> {
    constexpr static const char* name = "HLT/DoublePhoton33_CaloIdL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoublePhoton33_CaloIdL)};
      return output;
    }
  };

  template <>
  struct plotter <504> {
    constexpr static const char* name = "HLT/AK4PFJet120";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4PFJet120)};
      return output;
    }
  };

  template <>
  struct plotter <505> {
    constexpr static const char* name = "HLT/Mu20_Mu10_SameSign_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu20_Mu10_SameSign_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <506> {
    constexpr static const char* name = "HLT/AK8PFJetFwd140";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd140)};
      return output;
    }
  };

  template <>
  struct plotter <507> {
    constexpr static const char* name = "HLT/Mu8_IP3_part1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP3_part1)};
      return output;
    }
  };

  template <>
  struct plotter <508> {
    constexpr static const char* name = "HLT/DoubleMu48NoFiltersNoVtx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu48NoFiltersNoVtx)};
      return output;
    }
  };

  template <>
  struct plotter <509> {
    constexpr static const char* name = "HLT/QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2)};
      return output;
    }
  };

  template <>
  struct plotter <510> {
    constexpr static const char* name = "HLT/DiJet110_35_Mjj650_PFMET130";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiJet110_35_Mjj650_PFMET130)};
      return output;
    }
  };

  template <>
  struct plotter <511> {
    constexpr static const char* name = "HLT/IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <512> {
    constexpr static const char* name = "HLT/AK8PFJetFwd200";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd200)};
      return output;
    }
  };

  template <>
  struct plotter <513> {
    constexpr static const char* name = "HLT/PFHT180";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT180)};
      return output;
    }
  };

  template <>
  struct plotter <514> {
    constexpr static const char* name = "HLT/Mu8_IP3_part4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP3_part4)};
      return output;
    }
  };

  template <>
  struct plotter <515> {
    constexpr static const char* name = "HLT/ECALHT800";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ECALHT800)};
      return output;
    }
  };

  template <>
  struct plotter <516> {
    constexpr static const char* name = "HLT/DoubleMu4_Jpsi_Displaced";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu4_Jpsi_Displaced)};
      return output;
    }
  };

  template <>
  struct plotter <517> {
    constexpr static const char* name = "HLT/PFMETTypeOne120_PFMHT120_IDTight_PFHT60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETTypeOne120_PFMHT120_IDTight_PFHT60)};
      return output;
    }
  };

  template <>
  struct plotter <518> {
    constexpr static const char* name = "HLT/CDC_L2cosmic_5_er1p0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CDC_L2cosmic_5_er1p0)};
      return output;
    }
  };

  template <>
  struct plotter <519> {
    constexpr static const char* name = "HLT/DiPFJetAve300_HFJEC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve300_HFJEC)};
      return output;
    }
  };

  template <>
  struct plotter <520> {
    constexpr static const char* name = "HLT/BTagMu_AK8Jet300_Mu5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK8Jet300_Mu5)};
      return output;
    }
  };

  template <>
  struct plotter <521> {
    constexpr static const char* name = "HLT/BTagMu_AK4DiJet70_Mu5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4DiJet70_Mu5)};
      return output;
    }
  };

  template <>
  struct plotter <522> {
    constexpr static const char* name = "HLT/HT430_DisplacedDijet60_DisplacedTrack";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HT430_DisplacedDijet60_DisplacedTrack)};
      return output;
    }
  };

  template <>
  struct plotter <523> {
    constexpr static const char* name = "HLT/DiMu9_Ele9_CaloIdL_TrackIdL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiMu9_Ele9_CaloIdL_TrackIdL)};
      return output;
    }
  };

  template <>
  struct plotter <524> {
    constexpr static const char* name = "HLT/Mu18_Mu9_SameSign_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu18_Mu9_SameSign_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <525> {
    constexpr static const char* name = "HLT/DiPFJetAve40";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve40)};
      return output;
    }
  };

  template <>
  struct plotter <526> {
    constexpr static const char* name = "HLT/PFJetFwd25";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd25)};
      return output;
    }
  };

  template <>
  struct plotter <527> {
    constexpr static const char* name = "HLT/Ele15_IsoVVVL_PFHT450_PFMET50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele15_IsoVVVL_PFHT450_PFMET50)};
      return output;
    }
  };

  template <>
  struct plotter <528> {
    constexpr static const char* name = "HLT/L2Mu50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L2Mu50)};
      return output;
    }
  };

  template <>
  struct plotter <529> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1)};
      return output;
    }
  };

  template <>
  struct plotter <530> {
    constexpr static const char* name = "HLT/L2Mu23NoVtx_2Cha_CosmicSeed";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L2Mu23NoVtx_2Cha_CosmicSeed)};
      return output;
    }
  };

  template <>
  struct plotter <531> {
    constexpr static const char* name = "HLT/HT400_DisplacedDijet40_DisplacedTrack";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HT400_DisplacedDijet40_DisplacedTrack)};
      return output;
    }
  };

  template <>
  struct plotter <532> {
    constexpr static const char* name = "HLT/Dimuon0_Jpsi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Jpsi)};
      return output;
    }
  };

  template <>
  struct plotter <533> {
    constexpr static const char* name = "HLT/Ele200_CaloIdVT_GsfTrkIdT";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele200_CaloIdVT_GsfTrkIdT)};
      return output;
    }
  };

  template <>
  struct plotter <534> {
    constexpr static const char* name = "HLT/Ele40_WPTight_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele40_WPTight_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <535> {
    constexpr static const char* name = "HLT/DoubleMu2_Jpsi_DoubleTkMu0_Phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu2_Jpsi_DoubleTkMu0_Phi)};
      return output;
    }
  };

  template <>
  struct plotter <536> {
    constexpr static const char* name = "HLT/TrkMu16NoFiltersNoVtx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TrkMu16NoFiltersNoVtx)};
      return output;
    }
  };

  template <>
  struct plotter <537> {
    constexpr static const char* name = "HLT/L2Mu23NoVtx_2Cha";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L2Mu23NoVtx_2Cha)};
      return output;
    }
  };

  template <>
  struct plotter <538> {
    constexpr static const char* name = "HLT/BTagMu_AK4DiJet40_Mu5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4DiJet40_Mu5)};
      return output;
    }
  };

  template <>
  struct plotter <539> {
    constexpr static const char* name = "HLT/IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <540> {
    constexpr static const char* name = "HLT/DiPFJetAve140";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve140)};
      return output;
    }
  };

  template <>
  struct plotter <541> {
    constexpr static const char* name = "HLT/Mu25_TkMu0_Onia";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu25_TkMu0_Onia)};
      return output;
    }
  };

  template <>
  struct plotter <542> {
    constexpr static const char* name = "HLT/Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <543> {
    constexpr static const char* name = "HLT/IsoMu20";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu20)};
      return output;
    }
  };

  template <>
  struct plotter <544> {
    constexpr static const char* name = "HLT/IsoMu24";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu24)};
      return output;
    }
  };

  template <>
  struct plotter <545> {
    constexpr static const char* name = "HLT/IsoMu27";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu27)};
      return output;
    }
  };

  template <>
  struct plotter <546> {
    constexpr static const char* name = "HLT/Photon90_CaloIdL_PFHT700";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon90_CaloIdL_PFHT700)};
      return output;
    }
  };

  template <>
  struct plotter <547> {
    constexpr static const char* name = "HLT/Mu8_DiEle12_CaloIdL_TrackIdL_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_DiEle12_CaloIdL_TrackIdL_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <548> {
    constexpr static const char* name = "HLT/PFMET140_PFMHT140_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET140_PFMHT140_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <549> {
    constexpr static const char* name = "HLT/IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <550> {
    constexpr static const char* name = "HLT/Ele38_WPTight_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele38_WPTight_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <551> {
    constexpr static const char* name = "HLT/QuadPFJet103_88_75_15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet103_88_75_15)};
      return output;
    }
  };

  template <>
  struct plotter <552> {
    constexpr static const char* name = "HLT/PFHT350MinPFJet15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT350MinPFJet15)};
      return output;
    }
  };

  template <>
  struct plotter <553> {
    constexpr static const char* name = "HLT/Ele20_WPTight_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele20_WPTight_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <554> {
    constexpr static const char* name = "HLT/Rsq0p35";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Rsq0p35)};
      return output;
    }
  };

  template <>
  struct plotter <555> {
    constexpr static const char* name = "HLT/Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <556> {
    constexpr static const char* name = "HLT/ZeroBias_part2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_part2)};
      return output;
    }
  };

  template <>
  struct plotter <557> {
    constexpr static const char* name = "HLT/Mu19_TrkIsoVVL_Mu9_TrkIsoVVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL)};
      return output;
    }
  };

  template <>
  struct plotter <558> {
    constexpr static const char* name = "HLT/AK8PFJetFwd40";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd40)};
      return output;
    }
  };

  template <>
  struct plotter <559> {
    constexpr static const char* name = "HLT/ZeroBias_part7";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_part7)};
      return output;
    }
  };

  template <>
  struct plotter <560> {
    constexpr static const char* name = "HLT/Mu7p5_Track2_Upsilon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7p5_Track2_Upsilon)};
      return output;
    }
  };

  template <>
  struct plotter <561> {
    constexpr static const char* name = "HLT/ZeroBias_part5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_part5)};
      return output;
    }
  };

  template <>
  struct plotter <562> {
    constexpr static const char* name = "HLT/ZeroBias_part4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_part4)};
      return output;
    }
  };

  template <>
  struct plotter <563> {
    constexpr static const char* name = "HLT/Ele35_WPTight_Gsf_L1EGMT";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele35_WPTight_Gsf_L1EGMT)};
      return output;
    }
  };

  template <>
  struct plotter <564> {
    constexpr static const char* name = "HLT/PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5)};
      return output;
    }
  };

  template <>
  struct plotter <565> {
    constexpr static const char* name = "HLT/PFMETTypeOne140_PFMHT140_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETTypeOne140_PFMHT140_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <566> {
    constexpr static const char* name = "HLT/Mu20_Mu10";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu20_Mu10)};
      return output;
    }
  };

  template <>
  struct plotter <567> {
    constexpr static const char* name = "HLT/Mu50_IsoVVVL_PFHT450";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu50_IsoVVVL_PFHT450)};
      return output;
    }
  };

  template <>
  struct plotter <568> {
    constexpr static const char* name = "HLT/Ele50_CaloIdVT_GsfTrkIdT_PFJet165";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele50_CaloIdVT_GsfTrkIdT_PFJet165)};
      return output;
    }
  };

  template <>
  struct plotter <569> {
    constexpr static const char* name = "HLT/Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60)};
      return output;
    }
  };

  template <>
  struct plotter <570> {
    constexpr static const char* name = "HLT/Mu9_IP6_part4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP6_part4)};
      return output;
    }
  };

  template <>
  struct plotter <571> {
    constexpr static const char* name = "HLT/QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1)};
      return output;
    }
  };

  template <>
  struct plotter <572> {
    constexpr static const char* name = "HLT/Mu9_IP6_part0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP6_part0)};
      return output;
    }
  };

  template <>
  struct plotter <573> {
    constexpr static const char* name = "HLT/Mu8";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8)};
      return output;
    }
  };

  template <>
  struct plotter <574> {
    constexpr static const char* name = "HLT/Mu9_IP6_part2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP6_part2)};
      return output;
    }
  };

  template <>
  struct plotter <575> {
    constexpr static const char* name = "HLT/Mu9_IP6_part3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP6_part3)};
      return output;
    }
  };

  template <>
  struct plotter <576> {
    constexpr static const char* name = "HLT/RsqMR320_Rsq0p09_MR200";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.RsqMR320_Rsq0p09_MR200)};
      return output;
    }
  };

  template <>
  struct plotter <577> {
    constexpr static const char* name = "HLT/CaloMET350_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET350_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <578> {
    constexpr static const char* name = "HLT/Mu7p5_Track7_Upsilon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7p5_Track7_Upsilon)};
      return output;
    }
  };

  template <>
  struct plotter <579> {
    constexpr static const char* name = "HLT/PFMETTypeOne200_HBHE_BeamHaloCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETTypeOne200_HBHE_BeamHaloCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <580> {
    constexpr static const char* name = "HLT/SingleJet30_Mu12_SinglePFJet40";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.SingleJet30_Mu12_SinglePFJet40)};
      return output;
    }
  };

  template <>
  struct plotter <581> {
    constexpr static const char* name = "HLT/DoubleTrkMu_16_6_NoFiltersNoVtx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleTrkMu_16_6_NoFiltersNoVtx)};
      return output;
    }
  };

  template <>
  struct plotter <582> {
    constexpr static const char* name = "HLT/ZeroBias_Alignment";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_Alignment)};
      return output;
    }
  };

  template <>
  struct plotter <583> {
    constexpr static const char* name = "HLT/IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <584> {
    constexpr static const char* name = "HLT/Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5)};
      return output;
    }
  };

  template <>
  struct plotter <585> {
    constexpr static const char* name = "HLT/PFMETNoMu140_PFMHTNoMu140_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETNoMu140_PFMHTNoMu140_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <586> {
    constexpr static const char* name = "HLT/BTagMu_AK8Jet170_DoubleMu5_noalgo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK8Jet170_DoubleMu5_noalgo)};
      return output;
    }
  };

  template <>
  struct plotter <587> {
    constexpr static const char* name = "HLT/TriplePhoton_30_30_10_CaloIdLV2_R9IdVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TriplePhoton_30_30_10_CaloIdLV2_R9IdVL)};
      return output;
    }
  };

  template <>
  struct plotter <588> {
    constexpr static const char* name = "HLT/Dimuon0_Upsilon_L1_5M";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Upsilon_L1_5M)};
      return output;
    }
  };

  template <>
  struct plotter <589> {
    constexpr static const char* name = "HLT/AK8PFJetFwd320";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd320)};
      return output;
    }
  };

  template <>
  struct plotter <590> {
    constexpr static const char* name = "HLT/DiPFJetAve200";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve200)};
      return output;
    }
  };

  template <>
  struct plotter <591> {
    constexpr static const char* name = "HLT/PFJet400";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet400)};
      return output;
    }
  };

  template <>
  struct plotter <592> {
    constexpr static const char* name = "HLT/Mu7p5_Track2_Jpsi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7p5_Track2_Jpsi)};
      return output;
    }
  };

  template <>
  struct plotter <593> {
    constexpr static const char* name = "HLT/PFJetFwd140";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd140)};
      return output;
    }
  };

  template <>
  struct plotter <594> {
    constexpr static const char* name = "HLT/Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3)};
      return output;
    }
  };

  template <>
  struct plotter <595> {
    constexpr static const char* name = "HLT/PFMET120_PFMHT120_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET120_PFMHT120_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <596> {
    constexpr static const char* name = "HLT/HT425";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HT425)};
      return output;
    }
  };

  template <>
  struct plotter <597> {
    constexpr static const char* name = "HLT/PFHT500_PFMET110_PFMHT110_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT500_PFMET110_PFMHT110_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <598> {
    constexpr static const char* name = "HLT/AK4PFJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4PFJet30)};
      return output;
    }
  };

  template <>
  struct plotter <599> {
    constexpr static const char* name = "HLT/Mu8_IP6_part1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP6_part1)};
      return output;
    }
  };

  template <>
  struct plotter <600> {
    constexpr static const char* name = "HLT/DoublePhoton70";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoublePhoton70)};
      return output;
    }
  };

  template <>
  struct plotter <601> {
    constexpr static const char* name = "HLT/AK4CaloJet50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4CaloJet50)};
      return output;
    }
  };

  template <>
  struct plotter <602> {
    constexpr static const char* name = "HLT/DiPFJetAve160_HFJEC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve160_HFJEC)};
      return output;
    }
  };

  template <>
  struct plotter <603> {
    constexpr static const char* name = "HLT/Mu8_IP6_part3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP6_part3)};
      return output;
    }
  };

  template <>
  struct plotter <604> {
    constexpr static const char* name = "HLT/BTagMu_AK8DiJet170_Mu5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK8DiJet170_Mu5)};
      return output;
    }
  };

  template <>
  struct plotter <605> {
    constexpr static const char* name = "HLT/TriplePhoton_20_20_20_CaloIdLV2_R9IdVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TriplePhoton_20_20_20_CaloIdLV2_R9IdVL)};
      return output;
    }
  };

  template <>
  struct plotter <606> {
    constexpr static const char* name = "HLT/Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15)};
      return output;
    }
  };

  template <>
  struct plotter <607> {
    constexpr static const char* name = "HLT/Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <608> {
    constexpr static const char* name = "HLT/Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8)};
      return output;
    }
  };

  template <>
  struct plotter <609> {
    constexpr static const char* name = "HLT/Dimuon25_Jpsi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon25_Jpsi)};
      return output;
    }
  };

  template <>
  struct plotter <610> {
    constexpr static const char* name = "HLT/BTagMu_AK4DiJet110_Mu5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4DiJet110_Mu5)};
      return output;
    }
  };

  template <>
  struct plotter <611> {
    constexpr static const char* name = "HLT/DoublePFJets200_CaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoublePFJets200_CaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <612> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1)};
      return output;
    }
  };

  template <>
  struct plotter <613> {
    constexpr static const char* name = "HLT/DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg)};
      return output;
    }
  };

  template <>
  struct plotter <614> {
    constexpr static const char* name = "HLT/Photon175";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon175)};
      return output;
    }
  };

  template <>
  struct plotter <615> {
    constexpr static const char* name = "HLT/HT300_Beamspot";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HT300_Beamspot)};
      return output;
    }
  };

  template <>
  struct plotter <616> {
    constexpr static const char* name = "HLT/Mu7_IP4_part4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7_IP4_part4)};
      return output;
    }
  };

  template <>
  struct plotter <617> {
    constexpr static const char* name = "HLT/DoubleMu43NoFiltersNoVtx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu43NoFiltersNoVtx)};
      return output;
    }
  };

  template <>
  struct plotter <618> {
    constexpr static const char* name = "HLT/Mu43NoFiltersNoVtx_Photon43_CaloIdL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu43NoFiltersNoVtx_Photon43_CaloIdL)};
      return output;
    }
  };

  template <>
  struct plotter <619> {
    constexpr static const char* name = "HLT/DoubleEle25_CaloIdL_MW";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleEle25_CaloIdL_MW)};
      return output;
    }
  };

  template <>
  struct plotter <620> {
    constexpr static const char* name = "HLT/Mu7_IP4_part1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7_IP4_part1)};
      return output;
    }
  };

  template <>
  struct plotter <621> {
    constexpr static const char* name = "HLT/Mu7_IP4_part2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7_IP4_part2)};
      return output;
    }
  };

  template <>
  struct plotter <622> {
    constexpr static const char* name = "HLT/Mu7_IP4_part3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7_IP4_part3)};
      return output;
    }
  };

  template <>
  struct plotter <623> {
    constexpr static const char* name = "HLT/Dimuon18_PsiPrime";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon18_PsiPrime)};
      return output;
    }
  };

  template <>
  struct plotter <624> {
    constexpr static const char* name = "HLT/AK8PFHT750_TrimMass50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFHT750_TrimMass50)};
      return output;
    }
  };

  template <>
  struct plotter <625> {
    constexpr static const char* name = "HLT/Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL)};
      return output;
    }
  };

  template <>
  struct plotter <626> {
    constexpr static const char* name = "HLT/Mu9_IP4_part4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP4_part4)};
      return output;
    }
  };

  template <>
  struct plotter <627> {
    constexpr static const char* name = "HLT/Mu9_IP4_part2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP4_part2)};
      return output;
    }
  };

  template <>
  struct plotter <628> {
    constexpr static const char* name = "HLT/PFHT700_PFMET85_PFMHT85_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT700_PFMET85_PFMHT85_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <629> {
    constexpr static const char* name = "HLT/PFHT800_PFMET75_PFMHT75_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT800_PFMET75_PFMHT75_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <630> {
    constexpr static const char* name = "HLT/RsqMR320_Rsq0p09_MR200_4jet";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.RsqMR320_Rsq0p09_MR200_4jet)};
      return output;
    }
  };

  template <>
  struct plotter <631> {
    constexpr static const char* name = "HLT/HcalPhiSym";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HcalPhiSym)};
      return output;
    }
  };

  template <>
  struct plotter <632> {
    constexpr static const char* name = "HLT/IsoTrackHE";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoTrackHE)};
      return output;
    }
  };

  template <>
  struct plotter <633> {
    constexpr static const char* name = "HLT/IsoTrackHB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoTrackHB)};
      return output;
    }
  };

  template <>
  struct plotter <634> {
    constexpr static const char* name = "HLT/PFJetFwd200";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd200)};
      return output;
    }
  };

  template <>
  struct plotter <635> {
    constexpr static const char* name = "HLT/QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1)};
      return output;
    }
  };

  template <>
  struct plotter <636> {
    constexpr static const char* name = "HLT/PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60)};
      return output;
    }
  };

  template <>
  struct plotter <637> {
    constexpr static const char* name = "HLT/MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <638> {
    constexpr static const char* name = "HLT/Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <639> {
    constexpr static const char* name = "HLT/Photon90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon90)};
      return output;
    }
  };

  template <>
  struct plotter <640> {
    constexpr static const char* name = "HLT/AK8PFJet400";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet400)};
      return output;
    }
  };

  template <>
  struct plotter <641> {
    constexpr static const char* name = "HLT/DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8)};
      return output;
    }
  };

  template <>
  struct plotter <642> {
    constexpr static const char* name = "HLT/PFMETNoMu130_PFMHTNoMu130_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETNoMu130_PFMHTNoMu130_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <643> {
    constexpr static const char* name = "HLT/Dimuon10_PsiPrime_Barrel_Seagulls";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon10_PsiPrime_Barrel_Seagulls)};
      return output;
    }
  };

  template <>
  struct plotter <644> {
    constexpr static const char* name = "HLT/Mu8_DiEle12_CaloIdL_TrackIdL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_DiEle12_CaloIdL_TrackIdL)};
      return output;
    }
  };

  template <>
  struct plotter <645> {
    constexpr static const char* name = "HLT/DoubleMu33NoFiltersNoVtxDisplaced";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu33NoFiltersNoVtxDisplaced)};
      return output;
    }
  };

  template <>
  struct plotter <646> {
    constexpr static const char* name = "HLT/Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5)};
      return output;
    }
  };

  template <>
  struct plotter <647> {
    constexpr static const char* name = "HLT/Mu27_Ele37_CaloIdL_MW";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu27_Ele37_CaloIdL_MW)};
      return output;
    }
  };

  template <>
  struct plotter <648> {
    constexpr static const char* name = "HLT/PFHT510";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT510)};
      return output;
    }
  };

  template <>
  struct plotter <649> {
    constexpr static const char* name = "HLT/Photon60_R9Id90_CaloIdL_IsoL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon60_R9Id90_CaloIdL_IsoL)};
      return output;
    }
  };

  template <>
  struct plotter <650> {
    constexpr static const char* name = "HLT/PFHT680";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT680)};
      return output;
    }
  };

  template <>
  struct plotter <651> {
    constexpr static const char* name = "HLT/L1NotBptxOR";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L1NotBptxOR)};
      return output;
    }
  };

  template <>
  struct plotter <652> {
    constexpr static const char* name = "HLT/DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg)};
      return output;
    }
  };

  template <>
  struct plotter <653> {
    constexpr static const char* name = "HLT/Dimuon0_Upsilon_Muon_NoL1Mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Upsilon_Muon_NoL1Mass)};
      return output;
    }
  };

  template <>
  struct plotter <654> {
    constexpr static const char* name = "HLT/ZeroBias_IsolatedBunches";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_IsolatedBunches)};
      return output;
    }
  };

  template <>
  struct plotter <655> {
    constexpr static const char* name = "HLT/BTagMu_AK4DiJet110_Mu5_noalgo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4DiJet110_Mu5_noalgo)};
      return output;
    }
  };

  template <>
  struct plotter <656> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100)};
      return output;
    }
  };

  template <>
  struct plotter <657> {
    constexpr static const char* name = "HLT/TripleJet110_35_35_Mjj650_PFMET110";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TripleJet110_35_35_Mjj650_PFMET110)};
      return output;
    }
  };

  template <>
  struct plotter <658> {
    constexpr static const char* name = "HLT/DoubleL2Mu23NoVtx_2Cha_NoL2Matched";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu23NoVtx_2Cha_NoL2Matched)};
      return output;
    }
  };

  template <>
  struct plotter <659> {
    constexpr static const char* name = "HLT/QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2)};
      return output;
    }
  };

  template <>
  struct plotter <660> {
    constexpr static const char* name = "HLT/Mu30_TkMu0_Psi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu30_TkMu0_Psi)};
      return output;
    }
  };

  template <>
  struct plotter <661> {
    constexpr static const char* name = "HLT/Dimuon0_Upsilon_L1_5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Upsilon_L1_5)};
      return output;
    }
  };

  template <>
  struct plotter <662> {
    constexpr static const char* name = "HLT/L1SingleMu25";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L1SingleMu25)};
      return output;
    }
  };

  template <>
  struct plotter <663> {
    constexpr static const char* name = "HLT/DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4)};
      return output;
    }
  };

  template <>
  struct plotter <664> {
    constexpr static const char* name = "HLT/Dimuon0_Jpsi_NoVertexing_NoOS";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Jpsi_NoVertexing_NoOS)};
      return output;
    }
  };

  template <>
  struct plotter <665> {
    constexpr static const char* name = "HLT/UncorrectedJetE30_NoBPTX";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.UncorrectedJetE30_NoBPTX)};
      return output;
    }
  };

  template <>
  struct plotter <666> {
    constexpr static const char* name = "HLT/DiPFJetAve320";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve320)};
      return output;
    }
  };

  template <>
  struct plotter <667> {
    constexpr static const char* name = "HLT/Dimuon0_Upsilon_L1_4p5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Upsilon_L1_4p5)};
      return output;
    }
  };

  template <>
  struct plotter <668> {
    constexpr static const char* name = "HLT/PFMET250_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET250_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <669> {
    constexpr static const char* name = "HLT/PFMET130_PFMHT130_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET130_PFMHT130_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <670> {
    constexpr static const char* name = "HLT/Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL)};
      return output;
    }
  };

  template <>
  struct plotter <671> {
    constexpr static const char* name = "HLT/IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1)};
      return output;
    }
  };

  template <>
  struct plotter <672> {
    constexpr static const char* name = "HLT/DoubleEle33_CaloIdL_MW";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleEle33_CaloIdL_MW)};
      return output;
    }
  };

  template <>
  struct plotter <673> {
    constexpr static const char* name = "HLT/AK8PFJet420_TrimMass30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet420_TrimMass30)};
      return output;
    }
  };

  template <>
  struct plotter <674> {
    constexpr static const char* name = "HLT/Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5)};
      return output;
    }
  };

  template <>
  struct plotter <675> {
    constexpr static const char* name = "HLT/UncorrectedJetE60_NoBPTX3BX";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.UncorrectedJetE60_NoBPTX3BX)};
      return output;
    }
  };

  template <>
  struct plotter <676> {
    constexpr static const char* name = "HLT/CaloMET110_NotCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET110_NotCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <677> {
    constexpr static const char* name = "HLT/CaloMET250_NotCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET250_NotCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <678> {
    constexpr static const char* name = "HLT/DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon)};
      return output;
    }
  };

  template <>
  struct plotter <679> {
    constexpr static const char* name = "HLT/IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <680> {
    constexpr static const char* name = "HLT/Dimuon14_Phi_Barrel_Seagulls";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon14_Phi_Barrel_Seagulls)};
      return output;
    }
  };

  template <>
  struct plotter <681> {
    constexpr static const char* name = "HLT/Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <682> {
    constexpr static const char* name = "HLT/CaloMHT90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMHT90)};
      return output;
    }
  };

  template <>
  struct plotter <683> {
    constexpr static const char* name = "HLT/PFJetFwd80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd80)};
      return output;
    }
  };

  template <>
  struct plotter <684> {
    constexpr static const char* name = "HLT/Physics_part5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Physics_part5)};
      return output;
    }
  };

  template <>
  struct plotter <685> {
    constexpr static const char* name = "HLT/HT650_DisplacedDijet60_Inclusive";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HT650_DisplacedDijet60_Inclusive)};
      return output;
    }
  };

  template <>
  struct plotter <686> {
    constexpr static const char* name = "HLT/Mu20_TkMu0_Phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu20_TkMu0_Phi)};
      return output;
    }
  };

  template <>
  struct plotter <687> {
    constexpr static const char* name = "HLT/IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1)};
      return output;
    }
  };

  template <>
  struct plotter <688> {
    constexpr static const char* name = "HLT/Ele15_WPLoose_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele15_WPLoose_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <689> {
    constexpr static const char* name = "HLT/DoubleEle24_eta2p1_WPTight_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleEle24_eta2p1_WPTight_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <690> {
    constexpr static const char* name = "HLT/TriplePhoton_35_35_5_CaloIdLV2_R9IdVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TriplePhoton_35_35_5_CaloIdLV2_R9IdVL)};
      return output;
    }
  };

  template <>
  struct plotter <691> {
    constexpr static const char* name = "HLT/Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL)};
      return output;
    }
  };

  template <>
  struct plotter <692> {
    constexpr static const char* name = "HLT/DoubleMu3_TkMu_DsTau3Mu";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu3_TkMu_DsTau3Mu)};
      return output;
    }
  };

  template <>
  struct plotter <693> {
    constexpr static const char* name = "HLT/Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <694> {
    constexpr static const char* name = "HLT/Mu8_IP5_part4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP5_part4)};
      return output;
    }
  };

  template <>
  struct plotter <695> {
    constexpr static const char* name = "HLT/Random";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Random)};
      return output;
    }
  };

  template <>
  struct plotter <696> {
    constexpr static const char* name = "HLT/Mu8_IP5_part2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP5_part2)};
      return output;
    }
  };

  template <>
  struct plotter <697> {
    constexpr static const char* name = "HLT/Mu8_IP5_part3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP5_part3)};
      return output;
    }
  };

  template <>
  struct plotter <698> {
    constexpr static const char* name = "HLT/Mu8_IP5_part0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP5_part0)};
      return output;
    }
  };

  template <>
  struct plotter <699> {
    constexpr static const char* name = "HLT/Mu8_IP5_part1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP5_part1)};
      return output;
    }
  };

  template <>
  struct plotter <700> {
    constexpr static const char* name = "HLT/DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched)};
      return output;
    }
  };

  template <>
  struct plotter <701> {
    constexpr static const char* name = "HLT/DoublePFJets350_CaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoublePFJets350_CaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <702> {
    constexpr static const char* name = "HLT/Dimuon20_Jpsi_Barrel_Seagulls";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon20_Jpsi_Barrel_Seagulls)};
      return output;
    }
  };

  template <>
  struct plotter <703> {
    constexpr static const char* name = "HLT/Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <704> {
    constexpr static const char* name = "HLT/Mu3_L1SingleMu5orSingleMu7";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu3_L1SingleMu5orSingleMu7)};
      return output;
    }
  };

  template <>
  struct plotter <705> {
    constexpr static const char* name = "HLT/Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <706> {
    constexpr static const char* name = "HLT/Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <707> {
    constexpr static const char* name = "HLT/AK8PFJetFwd500";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd500)};
      return output;
    }
  };

  template <>
  struct plotter <708> {
    constexpr static const char* name = "HLT/TripleMu_5_3_3_Mass3p8_DCA";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TripleMu_5_3_3_Mass3p8_DCA)};
      return output;
    }
  };

  template <>
  struct plotter <709> {
    constexpr static const char* name = "HLT/Ele27_Ele37_CaloIdL_MW";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele27_Ele37_CaloIdL_MW)};
      return output;
    }
  };

  template <>
  struct plotter <710> {
    constexpr static const char* name = "HLT/BTagMu_AK8Jet300_Mu5_noalgo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK8Jet300_Mu5_noalgo)};
      return output;
    }
  };

  template <>
  struct plotter <711> {
    constexpr static const char* name = "HLT/AK8PFJet400_TrimMass30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet400_TrimMass30)};
      return output;
    }
  };

  template <>
  struct plotter <712> {
    constexpr static const char* name = "HLT/Photon50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon50)};
      return output;
    }
  };

  template <>
  struct plotter <713> {
    constexpr static const char* name = "HLT/UncorrectedJetE30_NoBPTX3BX";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.UncorrectedJetE30_NoBPTX3BX)};
      return output;
    }
  };

  template <>
  struct plotter <714> {
    constexpr static const char* name = "HLT/TripleMu_5_3_3_Mass3p8_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TripleMu_5_3_3_Mass3p8_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <715> {
    constexpr static const char* name = "HLT/DiPFJetAve100_HFJEC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve100_HFJEC)};
      return output;
    }
  };

  template <>
  struct plotter <716> {
    constexpr static const char* name = "HLT/DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4)};
      return output;
    }
  };

  template <>
  struct plotter <717> {
    constexpr static const char* name = "HLT/DoubleMu3_DZ_PFMET70_PFMHT70";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu3_DZ_PFMET70_PFMHT70)};
      return output;
    }
  };

  template <>
  struct plotter <718> {
    constexpr static const char* name = "HLT/PFJet25";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet25)};
      return output;
    }
  };

  template <>
  struct plotter <719> {
    constexpr static const char* name = "HLT/PFJetFwd320";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd320)};
      return output;
    }
  };

  template <>
  struct plotter <720> {
    constexpr static const char* name = "HLT/Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1)};
      return output;
    }
  };

  template <>
  struct plotter <721> {
    constexpr static const char* name = "HLT/HcalNZS";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HcalNZS)};
      return output;
    }
  };

  template <>
  struct plotter <722> {
    constexpr static const char* name = "HLT/CaloMET90_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET90_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <723> {
    constexpr static const char* name = "HLT/Photon165_R9Id90_HE10_IsoM";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon165_R9Id90_HE10_IsoM)};
      return output;
    }
  };

  template <>
  struct plotter <724> {
    constexpr static const char* name = "HLT/BTagMu_AK4DiJet70_Mu5_noalgo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4DiJet70_Mu5_noalgo)};
      return output;
    }
  };

  template <>
  struct plotter <725> {
    constexpr static const char* name = "HLT/ZeroBias_FirstBXAfterTrain";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_FirstBXAfterTrain)};
      return output;
    }
  };

  template <>
  struct plotter <726> {
    constexpr static const char* name = "HLT/Mu12_DoublePFJets350_CaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_DoublePFJets350_CaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <727> {
    constexpr static const char* name = "HLT/QuadPFJet98_83_71_15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet98_83_71_15)};
      return output;
    }
  };

  template <>
  struct plotter <728> {
    constexpr static const char* name = "HLT/PFHT250";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT250)};
      return output;
    }
  };

  template <>
  struct plotter <729> {
    constexpr static const char* name = "HLT/DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <730> {
    constexpr static const char* name = "HLT/HT550_DisplacedDijet60_Inclusive";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HT550_DisplacedDijet60_Inclusive)};
      return output;
    }
  };

  template <>
  struct plotter <731> {
    constexpr static const char* name = "HLT/AK8PFJet25";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet25)};
      return output;
    }
  };

  template <>
  struct plotter <732> {
    constexpr static const char* name = "HLT/Dimuon0_Jpsi_L1_4R_0er1p5R";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Jpsi_L1_4R_0er1p5R)};
      return output;
    }
  };

  template <>
  struct plotter <733> {
    constexpr static const char* name = "HLT/Dimuon0_LowMass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_LowMass)};
      return output;
    }
  };

  template <>
  struct plotter <734> {
    constexpr static const char* name = "HLT/VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1)};
      return output;
    }
  };

  template <>
  struct plotter <735> {
    constexpr static const char* name = "HLT/PFMET100_PFMHT100_IDTight_PFHT60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET100_PFMHT100_IDTight_PFHT60)};
      return output;
    }
  };

  template <>
  struct plotter <736> {
    constexpr static const char* name = "HLT/Mu9_IP5_part3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP5_part3)};
      return output;
    }
  };

  template <>
  struct plotter <737> {
    constexpr static const char* name = "HLT/Mu9_IP5_part2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP5_part2)};
      return output;
    }
  };

  template <>
  struct plotter <738> {
    constexpr static const char* name = "HLT/DoubleMu3_Trk_Tau3mu_NoL1Mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu3_Trk_Tau3mu_NoL1Mass)};
      return output;
    }
  };

  template <>
  struct plotter <739> {
    constexpr static const char* name = "HLT/Ele27_WPTight_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele27_WPTight_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <740> {
    constexpr static const char* name = "HLT/Mu9_IP5_part4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP5_part4)};
      return output;
    }
  };

  template <>
  struct plotter <741> {
    constexpr static const char* name = "HLT/Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <742> {
    constexpr static const char* name = "HLT/Ele15_Ele8_CaloIdL_TrackIdL_IsoVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele15_Ele8_CaloIdL_TrackIdL_IsoVL)};
      return output;
    }
  };

  template <>
  struct plotter <743> {
    constexpr static const char* name = "HLT/BTagMu_AK4Jet300_Mu5_noalgo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4Jet300_Mu5_noalgo)};
      return output;
    }
  };

  template <>
  struct plotter <744> {
    constexpr static const char* name = "HLT/Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8)};
      return output;
    }
  };

  template <>
  struct plotter <745> {
    constexpr static const char* name = "HLT/Dimuon0_Jpsi3p5_Muon2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Jpsi3p5_Muon2)};
      return output;
    }
  };

  template <>
  struct plotter <746> {
    constexpr static const char* name = "HLT/QuadPFJet111_90_80_15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet111_90_80_15)};
      return output;
    }
  };

  template <>
  struct plotter <747> {
    constexpr static const char* name = "HLT/DoubleL2Mu25NoVtx_2Cha_NoL2Matched";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu25NoVtx_2Cha_NoL2Matched)};
      return output;
    }
  };

  template <>
  struct plotter <748> {
    constexpr static const char* name = "HLT/Mu12_IP6_part3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_IP6_part3)};
      return output;
    }
  };

  template <>
  struct plotter <749> {
    constexpr static const char* name = "HLT/Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <750> {
    constexpr static const char* name = "HLT/Dimuon0_LowMass_L1_0er1p5R";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_LowMass_L1_0er1p5R)};
      return output;
    }
  };

  template <>
  struct plotter <751> {
    constexpr static const char* name = "HLT/Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <752> {
    constexpr static const char* name = "HLT/BTagMu_AK8Jet170_DoubleMu5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK8Jet170_DoubleMu5)};
      return output;
    }
  };

  template <>
  struct plotter <753> {
    constexpr static const char* name = "HLT/Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R)};
      return output;
    }
  };

  template <>
  struct plotter <754> {
    constexpr static const char* name = "HLT/PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1)};
      return output;
    }
  };

  template <>
  struct plotter <755> {
    constexpr static const char* name = "HLT/BTagMu_AK4DiJet170_Mu5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4DiJet170_Mu5)};
      return output;
    }
  };

  template <>
  struct plotter <756> {
    constexpr static const char* name = "HLT/Mu18_Mu9_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu18_Mu9_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <757> {
    constexpr static const char* name = "HLT/Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95)};
      return output;
    }
  };

  template <>
  struct plotter <758> {
    constexpr static const char* name = "HLT/Mu12_DoublePFJets100_CaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_DoublePFJets100_CaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <759> {
    constexpr static const char* name = "HLT/IsoMu24_eta2p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu24_eta2p1)};
      return output;
    }
  };

  template <>
  struct plotter <760> {
    constexpr static const char* name = "HLT/Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90)};
      return output;
    }
  };

  template <>
  struct plotter <761> {
    constexpr static const char* name = "HLT/DiPFJetAve80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve80)};
      return output;
    }
  };

  template <>
  struct plotter <762> {
    constexpr static const char* name = "HLT/DoublePFJets100_CaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoublePFJets100_CaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <763> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140)};
      return output;
    }
  };

  template <>
  struct plotter <764> {
    constexpr static const char* name = "HLT/Photon300_NoHE";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon300_NoHE)};
      return output;
    }
  };

  template <>
  struct plotter <765> {
    constexpr static const char* name = "HLT/Physics_part6";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Physics_part6)};
      return output;
    }
  };

  template <>
  struct plotter <766> {
    constexpr static const char* name = "HLT/Physics_part7";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Physics_part7)};
      return output;
    }
  };

  template <>
  struct plotter <767> {
    constexpr static const char* name = "HLT/Physics_part4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Physics_part4)};
      return output;
    }
  };

  template <>
  struct plotter <768> {
    constexpr static const char* name = "HLT/Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3)};
      return output;
    }
  };

  template <>
  struct plotter <769> {
    constexpr static const char* name = "HLT/Physics_part2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Physics_part2)};
      return output;
    }
  };

  template <>
  struct plotter <770> {
    constexpr static const char* name = "HLT/Mu15_IsoVVVL_PFHT600";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu15_IsoVVVL_PFHT600)};
      return output;
    }
  };

  template <>
  struct plotter <771> {
    constexpr static const char* name = "HLT/PFMETTypeOne130_PFMHT130_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETTypeOne130_PFMHT130_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <772> {
    constexpr static const char* name = "HLT/DoubleMu20_7_Mass0to30_L1_DM4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu20_7_Mass0to30_L1_DM4)};
      return output;
    }
  };

  template <>
  struct plotter <773> {
    constexpr static const char* name = "HLT/TriplePhoton_30_30_10_CaloIdLV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TriplePhoton_30_30_10_CaloIdLV2)};
      return output;
    }
  };

  template <>
  struct plotter <774> {
    constexpr static const char* name = "HLT/Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55)};
      return output;
    }
  };

  template <>
  struct plotter <775> {
    constexpr static const char* name = "HLT/Ele23_CaloIdM_TrackIdM_PFJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele23_CaloIdM_TrackIdM_PFJet30)};
      return output;
    }
  };

  template <>
  struct plotter <776> {
    constexpr static const char* name = "HLT/Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30)};
      return output;
    }
  };

  template <>
  struct plotter <777> {
    constexpr static const char* name = "HLT/EcalCalibration";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.EcalCalibration)};
      return output;
    }
  };

  template <>
  struct plotter <778> {
    constexpr static const char* name = "HLT/ZeroBias_LastCollisionInTrain";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_LastCollisionInTrain)};
      return output;
    }
  };

  template <>
  struct plotter <779> {
    constexpr static const char* name = "HLT/Mu12_DoublePFJets40_CaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_DoublePFJets40_CaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <780> {
    constexpr static const char* name = "HLT/Ele35_WPTight_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele35_WPTight_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <781> {
    constexpr static const char* name = "HLT/L1SingleMu18";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L1SingleMu18)};
      return output;
    }
  };

  template <>
  struct plotter <782> {
    constexpr static const char* name = "HLT/TrkMu16_DoubleTrkMu6NoFiltersNoVtx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TrkMu16_DoubleTrkMu6NoFiltersNoVtx)};
      return output;
    }
  };

  template <>
  struct plotter <783> {
    constexpr static const char* name = "HLT/PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60)};
      return output;
    }
  };

  template <>
  struct plotter <784> {
    constexpr static const char* name = "HLT/DoubleL2Mu23NoVtx_2Cha_CosmicSeed";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu23NoVtx_2Cha_CosmicSeed)};
      return output;
    }
  };

  template <>
  struct plotter <785> {
    constexpr static const char* name = "HLT/Dimuon0_LowMass_L1_4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_LowMass_L1_4)};
      return output;
    }
  };

  template <>
  struct plotter <786> {
    constexpr static const char* name = "HLT/HT450_Beamspot";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HT450_Beamspot)};
      return output;
    }
  };

  template <>
  struct plotter <787> {
    constexpr static const char* name = "HLT/CaloJet500_NoJetID";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloJet500_NoJetID)};
      return output;
    }
  };

  template <>
  struct plotter <788> {
    constexpr static const char* name = "HLT/Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <789> {
    constexpr static const char* name = "HLT/PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1)};
      return output;
    }
  };

  template <>
  struct plotter <790> {
    constexpr static const char* name = "HLT/CaloMET90_NotCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET90_NotCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <791> {
    constexpr static const char* name = "HLT/DoubleMu4_JpsiTrkTrk_Displaced";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu4_JpsiTrkTrk_Displaced)};
      return output;
    }
  };

  template <>
  struct plotter <792> {
    constexpr static const char* name = "HLT/AK4PFJet100";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4PFJet100)};
      return output;
    }
  };

  template <>
  struct plotter <793> {
    constexpr static const char* name = "HLT/Ele28_HighEta_SC20_Mass55";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele28_HighEta_SC20_Mass55)};
      return output;
    }
  };

  template <>
  struct plotter <794> {
    constexpr static const char* name = "HLT/PFMETNoMu110_PFMHTNoMu110_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETNoMu110_PFMHTNoMu110_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <795> {
    constexpr static const char* name = "HLT/PFMETNoMu120_PFMHTNoMu120_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETNoMu120_PFMHTNoMu120_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <796> {
    constexpr static const char* name = "HLT/Physics_part0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Physics_part0)};
      return output;
    }
  };

  template <>
  struct plotter <797> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau50_Trk30_eta2p1_1pr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr)};
      return output;
    }
  };

  template <>
  struct plotter <798> {
    constexpr static const char* name = "HLT/AK8PFJetFwd260";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd260)};
      return output;
    }
  };

  template <>
  struct plotter <799> {
    constexpr static const char* name = "HLT/PFJet260";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet260)};
      return output;
    }
  };

  template <>
  struct plotter <800> {
    constexpr static const char* name = "HLT/PFJet500";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet500)};
      return output;
    }
  };

  template <>
  struct plotter <801> {
    constexpr static const char* name = "HLT/IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <802> {
    constexpr static const char* name = "HLT/Ele300_CaloIdVT_GsfTrkIdT";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele300_CaloIdVT_GsfTrkIdT)};
      return output;
    }
  };

  template <>
  struct plotter <803> {
    constexpr static const char* name = "HLT/Mu23_Mu12_SameSign";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu23_Mu12_SameSign)};
      return output;
    }
  };

  template <>
  struct plotter <804> {
    constexpr static const char* name = "HLT/PFMETTypeOne100_PFMHT100_IDTight_PFHT60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETTypeOne100_PFMHT100_IDTight_PFHT60)};
      return output;
    }
  };

  template <>
  struct plotter <805> {
    constexpr static const char* name = "HLT/PFHT450_SixPFJet36_PFBTagDeepCSV_1p59";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT450_SixPFJet36_PFBTagDeepCSV_1p59)};
      return output;
    }
  };

  template <>
  struct plotter <806> {
    constexpr static const char* name = "HLT/Dimuon0_Upsilon_L1_4p5er2p0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Upsilon_L1_4p5er2p0)};
      return output;
    }
  };

  template <>
  struct plotter <807> {
    constexpr static const char* name = "HLT/DoubleMu20_7_Mass0to30_Photon23";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu20_7_Mass0to30_Photon23)};
      return output;
    }
  };

  template <>
  struct plotter <808> {
    constexpr static const char* name = "HLT/PFJet60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet60)};
      return output;
    }
  };

  template <>
  struct plotter <809> {
    constexpr static const char* name = "HLT/Photon30_HoverELoose";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon30_HoverELoose)};
      return output;
    }
  };

  template <>
  struct plotter <810> {
    constexpr static const char* name = "HLT/L2Mu10_NoVertex_NoBPTX3BX";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L2Mu10_NoVertex_NoBPTX3BX)};
      return output;
    }
  };

  template <>
  struct plotter <811> {
    constexpr static const char* name = "HLT/CaloMET70_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET70_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <812> {
    constexpr static const char* name = "HLT/Mu9_IP4_part0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP4_part0)};
      return output;
    }
  };

  template <>
  struct plotter <813> {
    constexpr static const char* name = "HLT/RsqMR300_Rsq0p09_MR200";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.RsqMR300_Rsq0p09_MR200)};
      return output;
    }
  };

  template <>
  struct plotter <814> {
    constexpr static const char* name = "HLT/TriplePhoton_20_20_20_CaloIdLV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TriplePhoton_20_20_20_CaloIdLV2)};
      return output;
    }
  };

  template <>
  struct plotter <815> {
    constexpr static const char* name = "HLT/PFMETTypeOne120_PFMHT120_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETTypeOne120_PFMHT120_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <816> {
    constexpr static const char* name = "HLT/Mu9_IP4_part1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP4_part1)};
      return output;
    }
  };

  template <>
  struct plotter <817> {
    constexpr static const char* name = "HLT/DiPFJetAve60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve60)};
      return output;
    }
  };

  template <>
  struct plotter <818> {
    constexpr static const char* name = "HLT/Mu8_IP3_part2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP3_part2)};
      return output;
    }
  };

  template <>
  struct plotter <819> {
    constexpr static const char* name = "HLT/PFHT350";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT350)};
      return output;
    }
  };

  template <>
  struct plotter <820> {
    constexpr static const char* name = "HLT/Mu18_Mu9_SameSign";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu18_Mu9_SameSign)};
      return output;
    }
  };

  template <>
  struct plotter <821> {
    constexpr static const char* name = "HLT/PFJet80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet80)};
      return output;
    }
  };

  template <>
  struct plotter <822> {
    constexpr static const char* name = "HLT/MET105_IsoTrk50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MET105_IsoTrk50)};
      return output;
    }
  };

  template <>
  struct plotter <823> {
    constexpr static const char* name = "HLT/AK8PFJet60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet60)};
      return output;
    }
  };

  template <>
  struct plotter <824> {
    constexpr static const char* name = "HLT/DiPFJetAve80_HFJEC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve80_HFJEC)};
      return output;
    }
  };

  template <>
  struct plotter <825> {
    constexpr static const char* name = "HLT/DoublePFJets40_CaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoublePFJets40_CaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <826> {
    constexpr static const char* name = "HLT/Rsq0p40";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Rsq0p40)};
      return output;
    }
  };

  template <>
  struct plotter <827> {
    constexpr static const char* name = "HLT/Mu7p5_L2Mu2_Upsilon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7p5_L2Mu2_Upsilon)};
      return output;
    }
  };

  template <>
  struct plotter <828> {
    constexpr static const char* name = "HLT/AK4PFJet50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4PFJet50)};
      return output;
    }
  };

  template <>
  struct plotter <829> {
    constexpr static const char* name = "HLT/AK8PFJetFwd15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd15)};
      return output;
    }
  };

  template <>
  struct plotter <830> {
    constexpr static const char* name = "HLT/BTagMu_AK4DiJet40_Mu5_noalgo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4DiJet40_Mu5_noalgo)};
      return output;
    }
  };

  template <>
  struct plotter <831> {
    constexpr static const char* name = "HLT/HT500_DisplacedDijet40_DisplacedTrack";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HT500_DisplacedDijet40_DisplacedTrack)};
      return output;
    }
  };

  template <>
  struct plotter <832> {
    constexpr static const char* name = "HLT/Physics";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Physics)};
      return output;
    }
  };

  template <>
  struct plotter <833> {
    constexpr static const char* name = "HLT/MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <834> {
    constexpr static const char* name = "HLT/Dimuon25_Jpsi_noCorrL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon25_Jpsi_noCorrL1)};
      return output;
    }
  };

  template <>
  struct plotter <835> {
    constexpr static const char* name = "HLT/Mu48NoFiltersNoVtx_Photon48_CaloIdL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu48NoFiltersNoVtx_Photon48_CaloIdL)};
      return output;
    }
  };

  template <>
  struct plotter <836> {
    constexpr static const char* name = "HLT/Mu8_IP6_part0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP6_part0)};
      return output;
    }
  };

  template <>
  struct plotter <837> {
    constexpr static const char* name = "HLT/CaloMET80_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET80_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <838> {
    constexpr static const char* name = "HLT/Mu8_IP6_part2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP6_part2)};
      return output;
    }
  };

  template <>
  struct plotter <839> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90)};
      return output;
    }
  };

  template <>
  struct plotter <840> {
    constexpr static const char* name = "HLT/Mu8_IP6_part4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_IP6_part4)};
      return output;
    }
  };

  template <>
  struct plotter <841> {
    constexpr static const char* name = "HLT/CDC_L2cosmic_5p5_er1p0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CDC_L2cosmic_5p5_er1p0)};
      return output;
    }
  };

  template <>
  struct plotter <842> {
    constexpr static const char* name = "HLT/Photon120_R9Id90_HE10_IsoM";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon120_R9Id90_HE10_IsoM)};
      return output;
    }
  };

  template <>
  struct plotter <843> {
    constexpr static const char* name = "HLT/Dimuon12_Upsilon_y1p4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon12_Upsilon_y1p4)};
      return output;
    }
  };

  template <>
  struct plotter <844> {
    constexpr static const char* name = "HLT/Photon20_HoverELoose";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon20_HoverELoose)};
      return output;
    }
  };

  template <>
  struct plotter <845> {
    constexpr static const char* name = "HLT/Ele32_WPTight_Gsf_L1DoubleEG";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele32_WPTight_Gsf_L1DoubleEG)};
      return output;
    }
  };

  template <>
  struct plotter <846> {
    constexpr static const char* name = "HLT/PFJet15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet15)};
      return output;
    }
  };

  template <>
  struct plotter <847> {
    constexpr static const char* name = "HLT/Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15)};
      return output;
    }
  };

  template <>
  struct plotter <848> {
    constexpr static const char* name = "HLT/DoubleMu4_3_Jpsi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu4_3_Jpsi)};
      return output;
    }
  };

  template <>
  struct plotter <849> {
    constexpr static const char* name = "HLT/Mu37_TkMu27";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu37_TkMu27)};
      return output;
    }
  };

  template <>
  struct plotter <850> {
    constexpr static const char* name = "HLT/DoubleMu3_DCA_PFMET50_PFMHT60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu3_DCA_PFMET50_PFMHT60)};
      return output;
    }
  };

  template <>
  struct plotter <851> {
    constexpr static const char* name = "HLT/PFMET120_PFMHT120_IDTight_PFHT60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET120_PFMHT120_IDTight_PFHT60)};
      return output;
    }
  };

  template <>
  struct plotter <852> {
    constexpr static const char* name = "HLT/L1UnpairedBunchBptxPlus";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L1UnpairedBunchBptxPlus)};
      return output;
    }
  };

  template <>
  struct plotter <853> {
    constexpr static const char* name = "HLT/AK8PFJet15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet15)};
      return output;
    }
  };

  template <>
  struct plotter <854> {
    constexpr static const char* name = "HLT/Mu9_IP4_part3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP4_part3)};
      return output;
    }
  };

  template <>
  struct plotter <855> {
    constexpr static const char* name = "HLT/L2Mu40_NoVertex_3Sta_NoBPTX3BX";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.L2Mu40_NoVertex_3Sta_NoBPTX3BX)};
      return output;
    }
  };

  template <>
  struct plotter <856> {
    constexpr static const char* name = "HLT/AK8PFJetFwd60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd60)};
      return output;
    }
  };

  template <>
  struct plotter <857> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110)};
      return output;
    }
  };

  template <>
  struct plotter <858> {
    constexpr static const char* name = "HLT/PFJetFwd500";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd500)};
      return output;
    }
  };

  template <>
  struct plotter <859> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr)};
      return output;
    }
  };

  template <>
  struct plotter <860> {
    constexpr static const char* name = "HLT/Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30)};
      return output;
    }
  };

  template <>
  struct plotter <861> {
    constexpr static const char* name = "HLT/AK8PFJet260";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet260)};
      return output;
    }
  };

  template <>
  struct plotter <862> {
    constexpr static const char* name = "HLT/PFHT700_PFMET95_PFMHT95_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT700_PFMET95_PFMHT95_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <863> {
    constexpr static const char* name = "HLT/IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <864> {
    constexpr static const char* name = "HLT/AK8PFJet500";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet500)};
      return output;
    }
  };

  template <>
  struct plotter <865> {
    constexpr static const char* name = "HLT/Ele17_WPLoose_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele17_WPLoose_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <866> {
    constexpr static const char* name = "HLT/PFHT590";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT590)};
      return output;
    }
  };

  template <>
  struct plotter <867> {
    constexpr static const char* name = "HLT/DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL)};
      return output;
    }
  };

  template <>
  struct plotter <868> {
    constexpr static const char* name = "HLT/Ele135_CaloIdVT_GsfTrkIdT";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele135_CaloIdVT_GsfTrkIdT)};
      return output;
    }
  };

  template <>
  struct plotter <869> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1)};
      return output;
    }
  };

  template <>
  struct plotter <870> {
    constexpr static const char* name = "HLT/Dimuon0_Jpsi_L1_NoOS";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Jpsi_L1_NoOS)};
      return output;
    }
  };

  template <>
  struct plotter <871> {
    constexpr static const char* name = "HLT/PFJet320";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet320)};
      return output;
    }
  };

  template <>
  struct plotter <872> {
    constexpr static const char* name = "HLT/QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2)};
      return output;
    }
  };

  template <>
  struct plotter <873> {
    constexpr static const char* name = "HLT/CaloMET250_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloMET250_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <874> {
    constexpr static const char* name = "HLT/Mu15_IsoVVVL_PFHT450";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu15_IsoVVVL_PFHT450)};
      return output;
    }
  };

  template <>
  struct plotter <875> {
    constexpr static const char* name = "HLT/Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3)};
      return output;
    }
  };

  template <>
  struct plotter <876> {
    constexpr static const char* name = "HLT/HcalCalibration";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HcalCalibration)};
      return output;
    }
  };

  template <>
  struct plotter <877> {
    constexpr static const char* name = "HLT/DoubleMu4_Jpsi_NoVertexing";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu4_Jpsi_NoVertexing)};
      return output;
    }
  };

  template <>
  struct plotter <878> {
    constexpr static const char* name = "HLT/Mu23_Mu12_SameSign_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu23_Mu12_SameSign_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <879> {
    constexpr static const char* name = "HLT/AK8PFJet80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet80)};
      return output;
    }
  };

  template <>
  struct plotter <880> {
    constexpr static const char* name = "HLT/Dimuon24_Upsilon_noCorrL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon24_Upsilon_noCorrL1)};
      return output;
    }
  };

  template <>
  struct plotter <881> {
    constexpr static const char* name = "HLT/ZeroBias_FirstCollisionAfterAbortGap";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_FirstCollisionAfterAbortGap)};
      return output;
    }
  };

  template <>
  struct plotter <882> {
    constexpr static const char* name = "HLT/Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <883> {
    constexpr static const char* name = "HLT/Mu7p5_L2Mu2_Jpsi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7p5_L2Mu2_Jpsi)};
      return output;
    }
  };

  template <>
  struct plotter <884> {
    constexpr static const char* name = "HLT/DoubleMu4_LowMassNonResonantTrk_Displaced";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu4_LowMassNonResonantTrk_Displaced)};
      return output;
    }
  };

  template <>
  struct plotter <885> {
    constexpr static const char* name = "HLT/Ele145_CaloIdVT_GsfTrkIdT";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele145_CaloIdVT_GsfTrkIdT)};
      return output;
    }
  };

  template <>
  struct plotter <886> {
    constexpr static const char* name = "HLT/HT430_DisplacedDijet40_DisplacedTrack";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.HT430_DisplacedDijet40_DisplacedTrack)};
      return output;
    }
  };

  template <>
  struct plotter <887> {
    constexpr static const char* name = "HLT/Mu17_TrkIsoVVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_TrkIsoVVL)};
      return output;
    }
  };

  template <>
  struct plotter <888> {
    constexpr static const char* name = "HLT/PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1)};
      return output;
    }
  };

  template <>
  struct plotter <889> {
    constexpr static const char* name = "HLT/DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched)};
      return output;
    }
  };

  template <>
  struct plotter <890> {
    constexpr static const char* name = "HLT/Mu7p5_Track3p5_Jpsi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7p5_Track3p5_Jpsi)};
      return output;
    }
  };

  template <>
  struct plotter <891> {
    constexpr static const char* name = "HLT/PFMET200_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET200_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <892> {
    constexpr static const char* name = "HLT/DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <893> {
    constexpr static const char* name = "HLT/Mu18_Mu9";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu18_Mu9)};
      return output;
    }
  };

  template <>
  struct plotter <894> {
    constexpr static const char* name = "HLT/Mu12_IP6_part4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_IP6_part4)};
      return output;
    }
  };

  template <>
  struct plotter <895> {
    constexpr static const char* name = "HLT/Photon120";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon120)};
      return output;
    }
  };

  template <>
  struct plotter <896> {
    constexpr static const char* name = "HLT/Mu12_IP6_part2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_IP6_part2)};
      return output;
    }
  };

  template <>
  struct plotter <897> {
    constexpr static const char* name = "HLT/Mu12_IP6_part1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_IP6_part1)};
      return output;
    }
  };

  template <>
  struct plotter <898> {
    constexpr static const char* name = "HLT/Mu12_IP6_part0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_IP6_part0)};
      return output;
    }
  };

  template <>
  struct plotter <899> {
    constexpr static const char* name = "HLT/MET120_IsoTrk50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MET120_IsoTrk50)};
      return output;
    }
  };

  template <>
  struct plotter <900> {
    constexpr static const char* name = "HLT/TrkMu17_DoubleTrkMu8NoFiltersNoVtx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TrkMu17_DoubleTrkMu8NoFiltersNoVtx)};
      return output;
    }
  };

  template <>
  struct plotter <901> {
    constexpr static const char* name = "HLT/Ele250_CaloIdVT_GsfTrkIdT";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele250_CaloIdVT_GsfTrkIdT)};
      return output;
    }
  };

  template <>
  struct plotter <902> {
    constexpr static const char* name = "HLT/SinglePhoton10_Eta3p1ForPPRef";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.SinglePhoton10_Eta3p1ForPPRef)};
      return output;
    }
  };

  template <>
  struct plotter <903> {
    constexpr static const char* name = "HLT/Mu9_IP5_part1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP5_part1)};
      return output;
    }
  };

  template <>
  struct plotter <904> {
    constexpr static const char* name = "HLT/DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg)};
      return output;
    }
  };

  template <>
  struct plotter <905> {
    constexpr static const char* name = "HLT/BTagMu_AK4DiJet20_Mu5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4DiJet20_Mu5)};
      return output;
    }
  };

  template <>
  struct plotter <906> {
    constexpr static const char* name = "HLT/AK8PFHT850_TrimMass50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFHT850_TrimMass50)};
      return output;
    }
  };

  template <>
  struct plotter <907> {
    constexpr static const char* name = "HLT/PFMETTypeOne110_PFMHT110_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETTypeOne110_PFMHT110_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <908> {
    constexpr static const char* name = "HLT/Mu9_IP5_part0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu9_IP5_part0)};
      return output;
    }
  };

  template <>
  struct plotter <909> {
    constexpr static const char* name = "HLT/VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1)};
      return output;
    }
  };

  template <>
  struct plotter <910> {
    constexpr static const char* name = "HLT/DoubleL2Mu25NoVtx_2Cha";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu25NoVtx_2Cha)};
      return output;
    }
  };

  template <>
  struct plotter <911> {
    constexpr static const char* name = "HLT/PFJet550";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet550)};
      return output;
    }
  };

  template <>
  struct plotter <912> {
    constexpr static const char* name = "HLT/Photon20";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon20)};
      return output;
    }
  };

  template <>
  struct plotter <913> {
    constexpr static const char* name = "HLT/Physics_part3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Physics_part3)};
      return output;
    }
  };

  template <>
  struct plotter <914> {
    constexpr static const char* name = "HLT/CaloJet550_NoJetID";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.CaloJet550_NoJetID)};
      return output;
    }
  };

  template <>
  struct plotter <915> {
    constexpr static const char* name = "HLT/TripleJet110_35_35_Mjj650_PFMET120";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TripleJet110_35_35_Mjj650_PFMET120)};
      return output;
    }
  };

  template <>
  struct plotter <916> {
    constexpr static const char* name = "HLT/Physics_part1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Physics_part1)};
      return output;
    }
  };

  template <>
  struct plotter <917> {
    constexpr static const char* name = "HLT/AK8PFJet320";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet320)};
      return output;
    }
  };

  template <>
  struct plotter <918> {
    constexpr static const char* name = "HLT/PFHT430";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT430)};
      return output;
    }
  };

  template <>
  struct plotter <919> {
    constexpr static const char* name = "HLT/Photon150";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon150)};
      return output;
    }
  };

  template <>
  struct plotter <920> {
    constexpr static const char* name = "HLT/Mu7p5_Track3p5_Upsilon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu7p5_Track3p5_Upsilon)};
      return output;
    }
  };

  template <>
  struct plotter <921> {
    constexpr static const char* name = "HLT/Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <922> {
    constexpr static const char* name = "HLT/Mu15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu15)};
      return output;
    }
  };

  template <>
  struct plotter <923> {
    constexpr static const char* name = "HLT/Ele28_WPTight_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele28_WPTight_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <924> {
    constexpr static const char* name = "HLT/DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350)};
      return output;
    }
  };

  template <>
  struct plotter <925> {
    constexpr static const char* name = "HLT/PFMET110_PFMHT110_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET110_PFMHT110_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <926> {
    constexpr static const char* name = "HLT/BTagMu_AK4DiJet20_Mu5_noalgo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4DiJet20_Mu5_noalgo)};
      return output;
    }
  };

  template <>
  struct plotter <927> {
    constexpr static const char* name = "HLT/Photon100EEHE10";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon100EEHE10)};
      return output;
    }
  };

  template <>
  struct plotter <928> {
    constexpr static const char* name = "HLT/Tau3Mu_Mu7_Mu1_TkMu1_Tau15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Tau3Mu_Mu7_Mu1_TkMu1_Tau15)};
      return output;
    }
  };

  template <>
  struct plotter <929> {
    constexpr static const char* name = "HLT/DoubleIsoMu20_eta2p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleIsoMu20_eta2p1)};
      return output;
    }
  };

  template <>
  struct plotter <930> {
    constexpr static const char* name = "HLT/DoubleMu3_DZ_PFMET50_PFMHT60";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu3_DZ_PFMET50_PFMHT60)};
      return output;
    }
  };

  template <>
  struct plotter <931> {
    constexpr static const char* name = "HLT/AK8PFJetFwd25";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd25)};
      return output;
    }
  };

  template <>
  struct plotter <932> {
    constexpr static const char* name = "HLT/Photon75_R9Id90_HE10_IsoM";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon75_R9Id90_HE10_IsoM)};
      return output;
    }
  };

  template <>
  struct plotter <933> {
    constexpr static const char* name = "HLT/MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <934> {
    constexpr static const char* name = "HLT/AK4PFJet80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK4PFJet80)};
      return output;
    }
  };

  template <>
  struct plotter <935> {
    constexpr static const char* name = "HLT/QuadPFJet105_88_76_15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet105_88_76_15)};
      return output;
    }
  };

  template <>
  struct plotter <936> {
    constexpr static const char* name = "HLT/PFJetFwd260";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd260)};
      return output;
    }
  };

  template <>
  struct plotter <937> {
    constexpr static const char* name = "HLT/DoubleL2Mu50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu50)};
      return output;
    }
  };

  template <>
  struct plotter <938> {
    constexpr static const char* name = "HLT/Mu55";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu55)};
      return output;
    }
  };

  template <>
  struct plotter <939> {
    constexpr static const char* name = "HLT/Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71)};
      return output;
    }
  };

  template <>
  struct plotter <940> {
    constexpr static const char* name = "HLT/Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350)};
      return output;
    }
  };

  template <>
  struct plotter <941> {
    constexpr static const char* name = "HLT/Ele20_eta2p1_WPLoose_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele20_eta2p1_WPLoose_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <942> {
    constexpr static const char* name = "HLT/Mu50";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu50)};
      return output;
    }
  };

  template <>
  struct plotter <943> {
    constexpr static const char* name = "HLT/Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30)};
      return output;
    }
  };

  template <>
  struct plotter <944> {
    constexpr static const char* name = "HLT/Photon35_TwoProngs35";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon35_TwoProngs35)};
      return output;
    }
  };

  template <>
  struct plotter <945> {
    constexpr static const char* name = "HLT/PFJetFwd400";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd400)};
      return output;
    }
  };

  template <>
  struct plotter <946> {
    constexpr static const char* name = "HLT/DiPFJetAve60_HFJEC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve60_HFJEC)};
      return output;
    }
  };

  template <>
  struct plotter <947> {
    constexpr static const char* name = "HLT/Ele28_eta2p1_WPTight_Gsf_HT150";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele28_eta2p1_WPTight_Gsf_HT150)};
      return output;
    }
  };

  template <>
  struct plotter <948> {
    constexpr static const char* name = "HLT/AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1)};
      return output;
    }
  };

  template <>
  struct plotter <949> {
    constexpr static const char* name = "HLT/PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94)};
      return output;
    }
  };

  template <>
  struct plotter <950> {
    constexpr static const char* name = "HLT/Photon90_R9Id90_HE10_IsoM";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon90_R9Id90_HE10_IsoM)};
      return output;
    }
  };

  template <>
  struct plotter <951> {
    constexpr static const char* name = "HLT/TripleJet110_35_35_Mjj650_PFMET130";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TripleJet110_35_35_Mjj650_PFMET130)};
      return output;
    }
  };

  template <>
  struct plotter <952> {
    constexpr static const char* name = "HLT/PFHT500_PFMET100_PFMHT100_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT500_PFMET100_PFMHT100_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <953> {
    constexpr static const char* name = "HLT/PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1)};
      return output;
    }
  };

  template <>
  struct plotter <954> {
    constexpr static const char* name = "HLT/MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120)};
      return output;
    }
  };

  template <>
  struct plotter <955> {
    constexpr static const char* name = "HLT/Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <956> {
    constexpr static const char* name = "HLT/DiPFJetAve260";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve260)};
      return output;
    }
  };

  template <>
  struct plotter <957> {
    constexpr static const char* name = "HLT/DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg)};
      return output;
    }
  };

  template <>
  struct plotter <958> {
    constexpr static const char* name = "HLT/PFHT890";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT890)};
      return output;
    }
  };

  template <>
  struct plotter <959> {
    constexpr static const char* name = "HLT/AK8PFJet550";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet550)};
      return output;
    }
  };

  template <>
  struct plotter <960> {
    constexpr static const char* name = "HLT/Dimuon0_Upsilon_L1_4p5er2p0M";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Upsilon_L1_4p5er2p0M)};
      return output;
    }
  };

  template <>
  struct plotter <961> {
    constexpr static const char* name = "HLT/Ele8_CaloIdM_TrackIdM_PFJet30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele8_CaloIdM_TrackIdM_PFJet30)};
      return output;
    }
  };

  template <>
  struct plotter <962> {
    constexpr static const char* name = "HLT/Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3)};
      return output;
    }
  };

  template <>
  struct plotter <963> {
    constexpr static const char* name = "HLT/ZeroBias_FirstCollisionInTrain";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_FirstCollisionInTrain)};
      return output;
    }
  };

  template <>
  struct plotter <964> {
    constexpr static const char* name = "HLT/Ele20_WPLoose_Gsf";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Ele20_WPLoose_Gsf)};
      return output;
    }
  };

  template <>
  struct plotter <965> {
    constexpr static const char* name = "HLT/TripleMu_12_10_5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.TripleMu_12_10_5)};
      return output;
    }
  };

  template <>
  struct plotter <966> {
    constexpr static const char* name = "HLT/PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1)};
      return output;
    }
  };

  template <>
  struct plotter <967> {
    constexpr static const char* name = "HLT/DoubleMu4_3_Bs";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu4_3_Bs)};
      return output;
    }
  };

  template <>
  struct plotter <968> {
    constexpr static const char* name = "HLT/PFJetFwd40";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJetFwd40)};
      return output;
    }
  };

  template <>
  struct plotter <969> {
    constexpr static const char* name = "HLT/PFHT400_SixPFJet32";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT400_SixPFJet32)};
      return output;
    }
  };

  template <>
  struct plotter <970> {
    constexpr static const char* name = "HLT/DiJet110_35_Mjj650_PFMET110";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiJet110_35_Mjj650_PFMET110)};
      return output;
    }
  };

  template <>
  struct plotter <971> {
    constexpr static const char* name = "HLT/QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1)};
      return output;
    }
  };

  template <>
  struct plotter <972> {
    constexpr static const char* name = "HLT/IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <973> {
    constexpr static const char* name = "HLT/PFHT370";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFHT370)};
      return output;
    }
  };

  template <>
  struct plotter <974> {
    constexpr static const char* name = "HLT/AK8PFJet360_TrimMass30";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet360_TrimMass30)};
      return output;
    }
  };

  template <>
  struct plotter <975> {
    constexpr static const char* name = "HLT/BTagMu_AK4Jet300_Mu5";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4Jet300_Mu5)};
      return output;
    }
  };

  template <>
  struct plotter <976> {
    constexpr static const char* name = "HLT/DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg)};
      return output;
    }
  };

  template <>
  struct plotter <977> {
    constexpr static const char* name = "HLT/Mu12_DoublePhoton20";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu12_DoublePhoton20)};
      return output;
    }
  };

  template <>
  struct plotter <978> {
    constexpr static const char* name = "HLT/AK8PFJetFwd400";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJetFwd400)};
      return output;
    }
  };

  template <>
  struct plotter <979> {
    constexpr static const char* name = "HLT/Dimuon0_Upsilon_Muon_L1_TM0";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Dimuon0_Upsilon_Muon_L1_TM0)};
      return output;
    }
  };

  template <>
  struct plotter <980> {
    constexpr static const char* name = "HLT/Mu17_Photon30_IsoCaloId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_Photon30_IsoCaloId)};
      return output;
    }
  };

  template <>
  struct plotter <981> {
    constexpr static const char* name = "HLT/MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <982> {
    constexpr static const char* name = "HLT/ZeroBias_part3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_part3)};
      return output;
    }
  };

  template <>
  struct plotter <983> {
    constexpr static const char* name = "HLT/DiJet110_35_Mjj650_PFMET120";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiJet110_35_Mjj650_PFMET120)};
      return output;
    }
  };

  template <>
  struct plotter <984> {
    constexpr static const char* name = "HLT/ZeroBias_Beamspot";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_Beamspot)};
      return output;
    }
  };

  template <>
  struct plotter <985> {
    constexpr static const char* name = "HLT/Mu25_TkMu0_Phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu25_TkMu0_Phi)};
      return output;
    }
  };

  template <>
  struct plotter <986> {
    constexpr static const char* name = "HLT/IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1)};
      return output;
    }
  };

  template <>
  struct plotter <987> {
    constexpr static const char* name = "HLT/Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL)};
      return output;
    }
  };

  template <>
  struct plotter <988> {
    constexpr static const char* name = "HLT/ZeroBias_part1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_part1)};
      return output;
    }
  };

  template <>
  struct plotter <989> {
    constexpr static const char* name = "HLT/DoubleL2Mu25NoVtx_2Cha_Eta2p4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleL2Mu25NoVtx_2Cha_Eta2p4)};
      return output;
    }
  };

  template <>
  struct plotter <990> {
    constexpr static const char* name = "HLT/VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1)};
      return output;
    }
  };

  template <>
  struct plotter <991> {
    constexpr static const char* name = "HLT/Mu19_TrkIsoVVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu19_TrkIsoVVL)};
      return output;
    }
  };

  template <>
  struct plotter <992> {
    constexpr static const char* name = "HLT/DoubleMu2_Jpsi_DoubleTrk1_Phi1p05";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu2_Jpsi_DoubleTrk1_Phi1p05)};
      return output;
    }
  };

  template <>
  struct plotter <993> {
    constexpr static const char* name = "HLT/AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02)};
      return output;
    }
  };

  template <>
  struct plotter <994> {
    constexpr static const char* name = "HLT/BTagMu_AK4DiJet170_Mu5_noalgo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.BTagMu_AK4DiJet170_Mu5_noalgo)};
      return output;
    }
  };

  template <>
  struct plotter <995> {
    constexpr static const char* name = "HLT/PFJet450";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFJet450)};
      return output;
    }
  };

  template <>
  struct plotter <996> {
    constexpr static const char* name = "HLT/ZeroBias_part6";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.ZeroBias_part6)};
      return output;
    }
  };

  template <>
  struct plotter <997> {
    constexpr static const char* name = "HLT/DoubleMu40NoFiltersNoVtxDisplaced";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DoubleMu40NoFiltersNoVtxDisplaced)};
      return output;
    }
  };

  template <>
  struct plotter <998> {
    constexpr static const char* name = "HLT/QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1)};
      return output;
    }
  };

  template <>
  struct plotter <999> {
    constexpr static const char* name = "HLT/DiPFJetAve220_HFJEC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.DiPFJetAve220_HFJEC)};
      return output;
    }
  };

  template <>
  struct plotter <1000> {
    constexpr static const char* name = "HLT/AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17)};
      return output;
    }
  };

  template <>
  struct plotter <1001> {
    constexpr static const char* name = "btagWeight/DeepCSVB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.btagWeight.DeepCSVB)};
      return output;
    }
  };

  template <>
  struct plotter <1002> {
    constexpr static const char* name = "btagWeight/CSVV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.btagWeight.CSVV2)};
      return output;
    }
  };

  template <>
  struct plotter <1003> {
    constexpr static const char* name = "CorrT1METJet/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.CorrT1METJet.size())};
      return output;
    }
  };

  template <>
  struct plotter <1004> {
    constexpr static const char* name = "CorrT1METJet/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.CorrT1METJet)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <1005> {
    constexpr static const char* name = "CorrT1METJet/rawPt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.CorrT1METJet)
        output.push_back(i.rawPt);
      return output;
    }
  };

  template <>
  struct plotter <1006> {
    constexpr static const char* name = "CorrT1METJet/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.CorrT1METJet)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <1007> {
    constexpr static const char* name = "CorrT1METJet/area";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.CorrT1METJet)
        output.push_back(i.area);
      return output;
    }
  };

  template <>
  struct plotter <1008> {
    constexpr static const char* name = "CorrT1METJet/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.CorrT1METJet)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <1009> {
    constexpr static const char* name = "CorrT1METJet/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.CorrT1METJet)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <1010> {
    constexpr static const char* name = "CorrT1METJet/muonSubtrFactor";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.CorrT1METJet)
        output.push_back(i.muonSubtrFactor);
      return output;
    }
  };

  template <>
  struct plotter <1011> {
    constexpr static const char* name = "TrigObj/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.TrigObj.size())};
      return output;
    }
  };

  template <>
  struct plotter <1012> {
    constexpr static const char* name = "TrigObj/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.TrigObj)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <1013> {
    constexpr static const char* name = "TrigObj/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.TrigObj)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <1014> {
    constexpr static const char* name = "TrigObj/l2pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.TrigObj)
        output.push_back(i.l2pt);
      return output;
    }
  };

  template <>
  struct plotter <1015> {
    constexpr static const char* name = "TrigObj/l1pt_2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.TrigObj)
        output.push_back(i.l1pt_2);
      return output;
    }
  };

  template <>
  struct plotter <1016> {
    constexpr static const char* name = "TrigObj/l1charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.TrigObj)
        output.push_back(i.l1charge);
      return output;
    }
  };

  template <>
  struct plotter <1017> {
    constexpr static const char* name = "TrigObj/id";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.TrigObj)
        output.push_back(i.id);
      return output;
    }
  };

  template <>
  struct plotter <1018> {
    constexpr static const char* name = "TrigObj/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.TrigObj)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <1019> {
    constexpr static const char* name = "TrigObj/filterBits";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.TrigObj)
        output.push_back(i.filterBits);
      return output;
    }
  };

  template <>
  struct plotter <1020> {
    constexpr static const char* name = "TrigObj/l1iso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.TrigObj)
        output.push_back(i.l1iso);
      return output;
    }
  };

  template <>
  struct plotter <1021> {
    constexpr static const char* name = "TrigObj/l1pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.TrigObj)
        output.push_back(i.l1pt);
      return output;
    }
  };

  template <>
  struct plotter <1022> {
    constexpr static const char* name = "LHE/Vpt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.LHE.Vpt)};
      return output;
    }
  };

  template <>
  struct plotter <1023> {
    constexpr static const char* name = "LHE/HT";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.LHE.HT)};
      return output;
    }
  };

  template <>
  struct plotter <1024> {
    constexpr static const char* name = "LHE/Njets";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.LHE.Njets)};
      return output;
    }
  };

  template <>
  struct plotter <1025> {
    constexpr static const char* name = "LHEPart/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.LHEPart.size())};
      return output;
    }
  };

  template <>
  struct plotter <1026> {
    constexpr static const char* name = "LHEPart/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.LHEPart)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <1027> {
    constexpr static const char* name = "LHEPart/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.LHEPart)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <1028> {
    constexpr static const char* name = "LHEPart/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.LHEPart)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <1029> {
    constexpr static const char* name = "LHEPart/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.LHEPart)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <1030> {
    constexpr static const char* name = "LHEPart/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.LHEPart)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <1031> {
    constexpr static const char* name = "Pileup/nTrueInt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Pileup.nTrueInt)};
      return output;
    }
  };

  template <>
  struct plotter <1032> {
    constexpr static const char* name = "METFixEE2017/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.METFixEE2017.phi)};
      return output;
    }
  };

  template <>
  struct plotter <1033> {
    constexpr static const char* name = "METFixEE2017/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.METFixEE2017.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <1034> {
    constexpr static const char* name = "METFixEE2017/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.METFixEE2017.pt)};
      return output;
    }
  };

  template <>
  struct plotter <1035> {
    constexpr static const char* name = "METFixEE2017/significance";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.METFixEE2017.significance)};
      return output;
    }
  };

#define NUM_PLOTS 1036

};

#endif

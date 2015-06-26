//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: TrkHitUse.cc,v 1.3 1999/04/27 00:33:16 sschaff Exp $
//
// Description:
//     
//
// Environment:
//      Software developed for the BaBar Detector at the SLAC B-Factory.
//
// Author(s): Steve Schaffner
//
//------------------------------------------------------------------------

#include "BTrk/BaBar/BaBar.hh"
#include "BTrk/TrkBase/TrkHitUse.hh"

//------------------------------------------------------------------------
TrkHitUse::TrkHitUse(TrkHitOnTrk const& theHit, double flt, bool active, 
		     int usable) : _hit(theHit) {
//------------------------------------------------------------------------
   _fltLen = flt;
   _isActive = active;
   _isUsable = usable;
}

//------------------------------------------------------------------------
TrkHitUse::~TrkHitUse() {
//------------------------------------------------------------------------
}

//------------------------------------------------------------------------
bool 
TrkHitUse::operator==(const TrkHitUse& rhs) const {
//------------------------------------------------------------------------
  return ( &(hit()) == &(rhs.hit()) );
}
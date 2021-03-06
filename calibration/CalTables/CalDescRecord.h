//# CalDescRecord.h: Cal_desc table record access and creation
//# Copyright (C) 1996,1997,1998
//# Associated Universities, Inc. Washington DC, USA.
//#
//# This library is free software; you can redistribute it and/or modify it
//# under the terms of the GNU Library General Public License as published by
//# the Free Software Foundation; either version 2 of the License, or (at your
//# option) any later version.
//#
//# This library is distributed in the hope that it will be useful, but WITHOUT
//# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
//# License for more details.
//#
//# You should have received a copy of the GNU Library General Public License
//# along with this library; if not, write to the Free Software Foundation,
//# Inc., 675 Massachusetts Ave, Cambridge, MA 02139, USA.
//#
//# Correspondence concerning AIPS++ should be adressed as follows:
//#        Internet email: aips2-request@nrao.edu.
//#        Postal address: AIPS++ Project Office
//#                        National Radio Astronomy Observatory
//#                        520 Edgemont Road
//#                        Charlottesville, VA 22903-2475 USA
//#
//#
//# $Id: 

#ifndef CALIBRATION_CALDESCRECORD_H
#define CALIBRATION_CALDESCRECORD_H

#include <casacore/casa/aips.h>
#include <casacore/casa/Containers/Record.h>

namespace casacore { //# NAMESPACE CASACORE - BEGIN

// <summary> 
// CalDescRecord: Cal_desc table record access and creation
// </summary>

// <use visibility=export>

// <reviewed reviewer="" date="" tests="" demos="">

// <prerequisite>
//   <li> <linkto class="Record">Record</linkto> module
//   <li> <linkto class="CalMainRecord">CalMainRecord</linkto> module
// </prerequisite>
//
// <etymology>
// From "calibration description sub-table" and "record".
// </etymology>
//
// <synopsis>
// The CalDescRecord classes allow access to, and creation of, records
// in the cal_desc calibration sub-table. Specializations for SkyJones
// calibration table record types is provided through inheritance.
// </etymology>
//
// <example>
// <srcblock>
// </srcblock>
// </example>
//
// <motivation>
// Encapsulate access to cal_desc calibration table records.
// </motivation>
//
// <todo asof="98/01/01">
// </todo>

class CalDescRecord
{
 public:
   // Default null constructor, and destructor
   CalDescRecord();
   ~CalDescRecord() {};

   // Construct from an existing record
   CalDescRecord (const Record& inpRec);

   // Return as record
   const Record& record();

   // Field accessors
   // a) define
   void defineNumSpw (const Int& numSpw);
   void defineNumChan (const Array <Int>& numChan);
   void defineNumReceptors (const Int& numReceptors);
   void defineNJones (const Int& nJones);
   void defineSpwId (const Array <Int>& spwId);
   void defineChanFreq (const Array <Double>& chanFreq);
   void defineChanWidth (const Array <Double>& chanWidth);
   void defineChanRange (const Array <Int>& chanRange);
   void definePolznType (const Array <String>& polznType);
   void defineJonesType (const String& jonesType);
   void defineMSName (const String& msName);
     
   // b) get
   void getNumSpw (Int& numSpw);
   void getNumChan (Array <Int>& numChan);
   void getNumReceptors (Int& numReceptors);
   void getNJones (Int& nJones);
   void getSpwId (Array <Int>& spwId);
   void getChanFreq (Array <Double>& chanFreq);
   void getChanWidth (Array <Double>& chanWidth);
   void getChanRange (Array <Int>& chanRange);
   void getPolznType (Array <String>& polznType);
   void getJonesType (String& jonesType);
   void getMSName (String& msName);

 protected:
   // Add to itsRecord
   void addRec (const Record& newRec);

 private:
   Record itsRecord;

};


} //# NAMESPACE CASACORE - END

#endif
   
  




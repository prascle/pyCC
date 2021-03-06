//##########################################################################
//#                                                                        #
//#                                boost.Python                            #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU Library General Public License as       #
//#  published by the Free Software Foundation; version 2 or later of the  #
//#  License.                                                              #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the          #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          Copyright 2021 Paul RASCLE www.openfields.fr                  #
//#                                                                        #
//##########################################################################

#ifndef CCPOLYLINEPY_DOCSTRINGS_HPP_
#define CCPOLYLINEPY_DOCSTRINGS_HPP_

const char* ccPolylinePy_ccPolyline_doc= R"(
The polyline is considered as a cloud of points
(in a specific order) with a open/closed state information.)";

const char* ccPolylinePy_computeLength_doc= R"(
Computes the polyline length.

:return: sum of segments length
:rtype: float )";

const char* ccPolylinePy_getName_doc= R"(
Get the name of the polyline.

:return: name
:rtype: str )";

const char* ccPolylinePy_is2DMode_doc= R"(
Returns whether the polyline is considered as 2D or 3D.

:return: whether the polyline is considered as 2D
:rtype: bool
)";

const char* ccPolylinePy_isClosed_doc= R"(
Returns whether the polyline is closed or not.

:return: whether the polyline is closed
:rtype: bool
)";

const char* ccPolylinePy_segmentCount_doc= R"(
Returns the number of segments.

:return: the number of segments
:rtype: int
)";

const char* ccPolylinePy_set2DMode_doc= R"(
Defines if the polyline is considered as 2D or 3D.

:param bool state: if `True`, the polyline is set 2D)";

const char* ccPolylinePy_setClosed_doc= R"(
Sets whether the polyline is closed or not.

:param bool state: if `True`, the polyline is set closed)";

const char* ccPolylinePy_setName_doc= R"(
Defines the polyline name.

:param str name: the name to give to the polyline)";

const char* ccPolylinePy_size_doc= R"(
Return the number of points.

:return: the number of points in the polyline
:rtype: int )";

const char* ccPolylinePy_smoothChaikin_doc= R"(
Smoothes the polyline (Chaikin algorithm).

:param float ratio: between 0 and 0.5 (excluded)
:param int iteration: Count of iteration

:return: smoothed polyline
:rtype: ccPolyline
)";

#endif /* CCPOLYLINEPY_DOCSTRINGS_HPP_ */

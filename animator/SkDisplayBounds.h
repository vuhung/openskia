/* libs/graphics/animator/SkDisplayBounds.h
**
** Copyright 2006, Google Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License"); 
** you may not use this file except in compliance with the License. 
** You may obtain a copy of the License at 
**
**     http://www.apache.org/licenses/LICENSE-2.0 
**
** Unless required by applicable law or agreed to in writing, software 
** distributed under the License is distributed on an "AS IS" BASIS, 
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
** See the License for the specific language governing permissions and 
** limitations under the License.
*/

#ifndef SkDisplayBounds_DEFINED
#define SkDisplayBounds_DEFINED

#include "SkDrawRectangle.h"

class SkDisplayBounds : public SkDrawRect {
    DECLARE_DISPLAY_MEMBER_INFO(Bounds);
    SkDisplayBounds();
    virtual bool draw(SkAnimateMaker& );
private:
    SkBool inval;
    typedef SkDrawRect INHERITED;
};

#endif // SkDisplayBounds_DEFINED


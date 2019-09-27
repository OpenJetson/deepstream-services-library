
/*
The MIT License

Copyright (c) 2019-Present, ROBERT HOWELL

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in-
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef _DSL_SOURCE_BINTR_H
#define _DSL_SOURCE_BINTR_H

#include "Dsl.h"
#include "DslBintr.h"

namespace DSL
{
    class SourceBintr : public Bintr
    {
    public: 
    
        SourceBintr(const char* source, gboolean live, 
            guint width, guint height, guint fps_n, guint fps_d);

        ~SourceBintr();
        
        void AddToParent(std::shared_ptr<Bintr> pParentBintr);

    private:
    
        /**
         @brief
         */
        gboolean m_isLive;

        /**
         @brief
         */
        guint m_width;

        /**
         @brief
         */
        guint m_height;

        /**
         @brief
         */
        guint m_fps_n;

        /**
         @brief
         */
        guint m_fps_d;

        /**
         @brief
         */
        guint m_latency;

        /**
         @brief
         */
        guint m_numDecodeSurfaces;

        /**
         @brief
         */
        guint m_numExtraSurfaces;

        /**
         @brief
         */
        GstElement * m_pSourceElement;
        
        /**
         @brief
         */
        GstElement * m_pCapsFilter;
    };
}

#endif // _DSL_SOURCE_BINTR_H

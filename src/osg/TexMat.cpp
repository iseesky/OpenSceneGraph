/* -*-c++-*- OpenSceneGraph - Copyright (C) 1998-2003 Robert Osfield 
 *
 * This library is open source and may be redistributed and/or modified under  
 * the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
 * (at your option) any later version.  The full license is in LICENSE file
 * included with this distribution, and on the openscenegraph.org website.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * OpenSceneGraph Public License for more details.
*/
#include <osg/GL>
#include <osg/TexMat>

using namespace osg;

TexMat::TexMat()
{
}


TexMat::~TexMat()
{
}

void TexMat::apply(State&) const
{
    glMatrixMode( GL_TEXTURE );
    glLoadMatrixf( _matrix.ptr() );
    glMatrixMode( GL_MODELVIEW ); // fix! GWM Aug 2001
}

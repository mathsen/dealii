// ---------------------------------------------------------------------
//
// Copyright (C) 2004 - 2019 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE.md at
// the top level directory of deal.II.
//
// ---------------------------------------------------------------------

#ifndef dealii_dof_tools_fake_hp_h
#define dealii_dof_tools_fake_hp_h
// fake hp check_this function that does nothing


template <int dim>
void
check_this(const hp::DoFHandler<dim> &dof_handler)
{
	// nothing to do here
}


#endif // dealii_dof_tools_fake_hp_h

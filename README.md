# NormChIP
User Manual for NormChIP version 1.0

CONTENTS OF THIS FILE
---------------------
   
 * Introduction
 * Requirements
 * Installation
 * Usage
 * Troubleshooting
 * Maintainers

INTRODUCTION
------------

This algorithm adopts the DESeq normalization method on ChIP-x signal profiles computed within a set of genomic regions of interest. The normalization method is based on the computation of a normalization factor (size factor) for each experiment, representing the sampling depth of each ChIP-x experiment. 
The normalization factor is derived by considering first, the ChIP-x read counts computed in equally-sized and consecutive subregions (bins) of the genomic regions of interest. These counts are stored in read count tables and data of different experiments are reported in separated read count tables. For each bin, NormChIP computes the geometric mean across the counts computed in the different experiments. Then, the median of the ratio between counts and the geometric mean is adopted as size factor to normalize the genomic signal profile.

REQUIREMENTS
------------

 * C++

INSTALLATION
------------
 
 * You may use NormChIP algorithm by directly run the 64-bit binary file (no compilation is needed), or you may build it from the source. For build the program from source type "make" in the installation folder.

USAGE
-------------
 
 * For NormChIP usage on a specific genomic interval:

	NormChIP <region_number> <exp_number> <bins> <exp_suffix>

		- region_number = Number of genomic regions analysed (rows of the table of read counts);
		- exp_number = Number of experiment considered;
		- bins = Number of sub-regions dividing the genomic regions analysed (columns of the table of read counts);
		- exp_suffix = Suffix of the name of the experiments analysed;

 * Example of normalization of 3 ChIP-x genomic signal profiles computed on 100 intervals subdivided in 200 bins:
	
		NormChIP 100 3 200 ER_ChIP-Seq_r

For further information:

Ferrero, G., Miano, V., Beccuti, M., Balbo, G., De Bortoli, M., & Cordero, F. (2017). Dissecting the genomic activity of a transcriptional regulator by the integrative analysis of omics data. Scientific reports, 7(1), 8564.

Please cite this work for algorithm usage.

MAINTAINERS
-----------

 * Beccuti Marco (University of Turin) - http://www.di.unito.it/~beccuti/
 * Ferrero Giulio (University of Turin) - http://www.di.unito.it/~ferrero/

/***************************************************************************
 *   Copyright (C) 2016 by Marco Beccuti and Giulio Ferrero                *
 *   beccuti@di.unito.it    											   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_VOLUMEAXISFIELD_H__
#define __MayaDM_VOLUMEAXISFIELD_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMField.h"
namespace MayaDM
{
class VolumeAxisField : public Field
{
public:
public:
	VolumeAxisField(FILE* file,const std::string& name,const std::string& parent=""):Field(file, name, parent, "volumeAxisField"){}
	virtual ~VolumeAxisField(){}
	void setInvertAttenuation(bool ia)
	{
		if(ia == false) return;
		fprintf(mFile,"setAttr \".ia\" %i;\n", ia);

	}
	void setAwayFromCenter(double afc)
	{
		if(afc == 1.0) return;
		fprintf(mFile,"setAttr \".afc\" %f;\n", afc);

	}
	void setAwayFromAxis(double afa)
	{
		if(afa == 1.0) return;
		fprintf(mFile,"setAttr \".afa\" %f;\n", afa);

	}
	void setAlongAxis(double alx)
	{
		if(alx == 0.0) return;
		fprintf(mFile,"setAttr \".alx\" %f;\n", alx);

	}
	void setAroundAxis(double arx)
	{
		if(arx == 0.0) return;
		fprintf(mFile,"setAttr \".arx\" %f;\n", arx);

	}
	void setDirectionalSpeed(double drs)
	{
		if(drs == 0.0) return;
		fprintf(mFile,"setAttr \".drs\" %f;\n", drs);

	}
	void setDirection(const double3& d)
	{
		fprintf(mFile,"setAttr \".d\" -type \"double3\" ");
		d.write(mFile);
		fprintf(mFile,";\n");

	}
	void setDirectionX(double dx)
	{
		if(dx == 1.0) return;
		fprintf(mFile,"setAttr \".d.dx\" %f;\n", dx);

	}
	void setDirectionY(double dy)
	{
		if(dy == 0.0) return;
		fprintf(mFile,"setAttr \".d.dy\" %f;\n", dy);

	}
	void setDirectionZ(double dz)
	{
		if(dz == 0.0) return;
		fprintf(mFile,"setAttr \".d.dz\" %f;\n", dz);

	}
	void setDisplaySpeed(bool dss)
	{
		if(dss == true) return;
		fprintf(mFile,"setAttr \".dss\" %i;\n", dss);

	}
	void setTurbulence(double trb)
	{
		if(trb == 0.0) return;
		fprintf(mFile,"setAttr \".trb\" %f;\n", trb);

	}
	void setTurbulenceSpeed(double trs)
	{
		if(trs == 0.2) return;
		fprintf(mFile,"setAttr \".trs\" %f;\n", trs);

	}
	void setTurbulenceFrequency(const double3& tf)
	{
		fprintf(mFile,"setAttr \".tf\" -type \"double3\" ");
		tf.write(mFile);
		fprintf(mFile,";\n");

	}
	void setTurbulenceFrequencyX(double tfx)
	{
		if(tfx == 1.0) return;
		fprintf(mFile,"setAttr \".tf.tfx\" %f;\n", tfx);

	}
	void setTurbulenceFrequencyY(double tfy)
	{
		if(tfy == 1.0) return;
		fprintf(mFile,"setAttr \".tf.tfy\" %f;\n", tfy);

	}
	void setTurbulenceFrequencyZ(double tfz)
	{
		if(tfz == 1.0) return;
		fprintf(mFile,"setAttr \".tf.tfz\" %f;\n", tfz);

	}
	void setTurbulenceOffset(const double3& to)
	{
		fprintf(mFile,"setAttr \".to\" -type \"double3\" ");
		to.write(mFile);
		fprintf(mFile,";\n");

	}
	void setTurbulenceOffsetX(double tox)
	{
		if(tox == 0.0) return;
		fprintf(mFile,"setAttr \".to.tox\" %f;\n", tox);

	}
	void setTurbulenceOffsetY(double toy)
	{
		if(toy == 0.0) return;
		fprintf(mFile,"setAttr \".to.toy\" %f;\n", toy);

	}
	void setTurbulenceOffsetZ(double toz)
	{
		if(toz == 0.0) return;
		fprintf(mFile,"setAttr \".to.toz\" %f;\n", toz);

	}
	void setDetailTurbulence(double dtr)
	{
		if(dtr == 0.0) return;
		fprintf(mFile,"setAttr \".dtr\" %f;\n", dtr);

	}
	void getInvertAttenuation()
	{
		fprintf(mFile,"\"%s.ia\"",mName.c_str());

	}
	void getAwayFromCenter()
	{
		fprintf(mFile,"\"%s.afc\"",mName.c_str());

	}
	void getAwayFromAxis()
	{
		fprintf(mFile,"\"%s.afa\"",mName.c_str());

	}
	void getAlongAxis()
	{
		fprintf(mFile,"\"%s.alx\"",mName.c_str());

	}
	void getAroundAxis()
	{
		fprintf(mFile,"\"%s.arx\"",mName.c_str());

	}
	void getDirectionalSpeed()
	{
		fprintf(mFile,"\"%s.drs\"",mName.c_str());

	}
	void getDirection()
	{
		fprintf(mFile,"\"%s.d\"",mName.c_str());

	}
	void getDirectionX()
	{
		fprintf(mFile,"\"%s.d.dx\"",mName.c_str());

	}
	void getDirectionY()
	{
		fprintf(mFile,"\"%s.d.dy\"",mName.c_str());

	}
	void getDirectionZ()
	{
		fprintf(mFile,"\"%s.d.dz\"",mName.c_str());

	}
	void getDisplaySpeed()
	{
		fprintf(mFile,"\"%s.dss\"",mName.c_str());

	}
	void getTurbulence()
	{
		fprintf(mFile,"\"%s.trb\"",mName.c_str());

	}
	void getTurbulenceSpeed()
	{
		fprintf(mFile,"\"%s.trs\"",mName.c_str());

	}
	void getTurbulenceFrequency()
	{
		fprintf(mFile,"\"%s.tf\"",mName.c_str());

	}
	void getTurbulenceFrequencyX()
	{
		fprintf(mFile,"\"%s.tf.tfx\"",mName.c_str());

	}
	void getTurbulenceFrequencyY()
	{
		fprintf(mFile,"\"%s.tf.tfy\"",mName.c_str());

	}
	void getTurbulenceFrequencyZ()
	{
		fprintf(mFile,"\"%s.tf.tfz\"",mName.c_str());

	}
	void getTurbulenceOffset()
	{
		fprintf(mFile,"\"%s.to\"",mName.c_str());

	}
	void getTurbulenceOffsetX()
	{
		fprintf(mFile,"\"%s.to.tox\"",mName.c_str());

	}
	void getTurbulenceOffsetY()
	{
		fprintf(mFile,"\"%s.to.toy\"",mName.c_str());

	}
	void getTurbulenceOffsetZ()
	{
		fprintf(mFile,"\"%s.to.toz\"",mName.c_str());

	}
	void getDetailTurbulence()
	{
		fprintf(mFile,"\"%s.dtr\"",mName.c_str());

	}
	void getTime()
	{
		fprintf(mFile,"\"%s.tim\"",mName.c_str());

	}
protected:
	VolumeAxisField(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):Field(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_VOLUMEAXISFIELD_H__
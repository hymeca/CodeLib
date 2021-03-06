#pragma once
#include "IVolumeParse.h"
class CFat16VolumeParse : public IVolumeParse
{
public:
	CFat16VolumeParse(void);
	virtual ~CFat16VolumeParse(void);

	virtual BOOL ScanFile( LPCTSTR lpszVolumeName );

	virtual BOOL ScanFileChange( LPCTSTR lpszVolume );

};


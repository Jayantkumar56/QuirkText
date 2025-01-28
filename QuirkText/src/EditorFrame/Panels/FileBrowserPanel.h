

#pragma once

#include "Quirk.h"

class FileBrowserPanel : public Quirk::Panel {
public:
	virtual void OnUpdate()		              override;
	virtual void OnImguiUiUpdate()            override;
	virtual bool OnEvent(Quirk::Event& event) override;

private:

};


#pragma once

#include "Quirk.h"


class EditorTitleBar : public Quirk::TitleBar{
public:
	EditorTitleBar() = default;
	~EditorTitleBar() = default;

	virtual void OnImguiUiUpdate() override;
	virtual bool OnEvent(Quirk::Event& event) override { return false; }
};

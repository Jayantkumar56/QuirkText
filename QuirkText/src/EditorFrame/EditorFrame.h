

#pragma once

#include "Quirk.h"
#include "TitleBar.h"
#include "Panels/FileBrowserPanel.h"


class EditorFrame : public Quirk::Frame {
public:
	EditorFrame(Quirk::WindowSpecification& spec) :
			Frame(spec)
	{
		SetTitleBar<EditorTitleBar>();

		AddPanel<FileBrowserPanel>();

		SetVSync(true);
	}

	~EditorFrame() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	virtual void OnUpdate()			          override;
	virtual void OnImguiUiUpdate()            override;
	virtual bool OnEvent(Quirk::Event& event) override;

private:
	std::filesystem::path m_WorkingDirectory;
};

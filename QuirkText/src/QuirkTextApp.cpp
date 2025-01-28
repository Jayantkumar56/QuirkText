


#include "Quirk.h"
#include "Core/Application/EntryPoint.h"

#include "Theme.h"
#include "FontManager.h"

#include "EditorFrame/EditorFrame.h"

class QuirkTextApp : public Quirk::Application {
public:
	QuirkTextApp() :
		Application(L"Quirk Engine", Quirk::RendererAPI::API::OpenGL)
	{
		Quirk::WindowSpecification tempSpec{ "Quirk Text", 1600, 900, 200, 50, true, false, true };
		AddFrame<EditorFrame>(tempSpec);
		FontManager::LoadFonts();
		Theme::SetTheme(ThemeName::DarkTheme);
	}

	~QuirkTextApp() {

	}
};

namespace Quirk {

	// LaunchApp() must be defined in the application
	// Create app object inside this function and call Run method
	void LaunchApp() {
		QuirkTextApp app;
		app.Run();
	}

}


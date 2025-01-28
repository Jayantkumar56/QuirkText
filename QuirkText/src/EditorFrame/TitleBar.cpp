


#include "Quirk.h"
#include "TitleBar.h"
#include "Theme.h"


void EditorTitleBar::OnImguiUiUpdate() {
	ImGui::PushStyleColor(ImGuiCol_Border, Theme::GetColor(ColorName::PopupBorder));

	if (ImGui::BeginMenu("File")) {
		if (ImGui::MenuItem("Exit")) {
			Quirk::WindowCloseEvent event;
			Quirk::Application::Get().OnWindowClose(event);
		}

		ImGui::EndMenu();
	}

	ImGui::PopStyleColor();
}


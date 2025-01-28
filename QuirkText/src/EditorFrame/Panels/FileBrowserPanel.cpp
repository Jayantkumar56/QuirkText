

#include "FileBrowserPanel.h"



void FileBrowserPanel::OnUpdate() {

}

void FileBrowserPanel::OnImguiUiUpdate() {
	ImGui::Begin("File Browser");

	ImGui::End();
}

bool FileBrowserPanel::OnEvent(Quirk::Event& event) {

    return false;
}

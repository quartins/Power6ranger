#include "Start.h"

using namespace Power6Rangers;

int main() {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Start());
}
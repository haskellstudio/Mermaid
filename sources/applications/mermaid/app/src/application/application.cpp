// +---------------------------------------------------------------------------
// |
// |   Mermaid GPL Source Code
// |   Copyright (c) 2013-2016 XNerv Ltda (http://xnerv.com). All rights reserved.
// |
// |   This file is part of the Mermaid GPL Source Code.
// |
// |   Mermaid Source Code is free software: you can redistribute it and/or
// |   modify it under the terms of the GNU General Public License
// |   as published by the Free Software Foundation, either version 3
// |   of the License, or (at your option) any later version.
// |
// |   Mermaid Source Code is distributed in the hope that it will be useful,
// |   but WITHOUT ANY WARRANTY; without even the implied warranty of
// |   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// |   GNU General Public License for more details.
// |
// |   You should have received a copy of the GNU General Public License
// |   along with Mermaid Source Code. If not, see <http://www.gnu.org/licenses/>.
// |
// +---------------------------------------------------------------------------

#include "application.h"

Mermaid::Application::App::App()
{
    
}

Mermaid::Application::App::~App()
{
    
}


Mermaid::Application::App& Mermaid::Application::App::getInstance()
{
    Mermaid::Application::App* const app = dynamic_cast<Mermaid::Application::App*>(&BaseApp::getInstance());
    return *app;
}


const juce::String Mermaid::Application::App::getAppName()
{
    return this->getApplicationName();
}

void Mermaid::Application::App::setAppName(const juce::String& name)
{
    
}

const Mermaid::Base::SemanticVersion Mermaid::Application::App::getAppVersion()
{
    return Mermaid::Base::SemanticVersion(0,0,0,"1");
}

juce::ApplicationCommandManager& Mermaid::Application::App::getAppCommandManager()
{
    return this->getAppCommandManager();
}

Mermaid::Engine::Managers::Menu::MenuRepository& Mermaid::Application::App::getAppMenuRepository()
{
	return *Mermaid::Engine::Managers::Menu::MenuRepository::getInstance();
}
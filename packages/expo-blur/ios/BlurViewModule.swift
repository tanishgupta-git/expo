// Copyright 2022-present 650 Industries. All rights reserved.

import ExpoModulesCore

public class BlurViewModule: Module {
  public func definition() -> ModuleDefinition {
    Name("ExpoBlurView")

    ViewManager {
      View {
        BlurView()
      }

      Prop("tint") { (view: BlurView, tint: String) in
        view.setTint(tint)
      }

      Prop("intensity") { (view: BlurView, intensity: Double) in
        view.setIntensity(intensity / 100)
      }
    }
  }
}

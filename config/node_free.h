#pragma once

#define STRINGIFY(x) #x

#define MORPH(name, k1, modifiers, k2) \
/ { \
  behaviors { \
    name: name { \
      compatible = "zmk,behavior-mod-morph"; \
      #binding-cells = <0>; \
      bindings = <k1>, <k2>; \
      mods = <(modifiers)>; \
    }; \
  }; \
};

#define TAPDANCE(name, ...) \
/ { \
  behaviors { \
    name: name {  \
      compatible = "zmk,behavior-tap-dance"; \
      #binding-cells = <0>; \
      bindings = __VA_ARGS__; \
    }; \
  }; \
};

#define MORPH_UP(name, k1, k2) MORPH(name, k1, MOD_LSFT|MOD_RSFT, k2)

#define MACRO(...) \
/ { \
  macros { \
    ZMK_MACRO(__VA_ARGS__) \
  }; \
};

#define COND_LAYER(if_layers, then_layer) \
/ { \
  conditional_layers { \
    compatible = "zmk,conditional-layers"; \
    then_layer##_cond_layer { \
      if-layers = <if_layers>; \
      then-layer = <then_layer>; \
    }; \
  }; \
};

#define LAYER(name, layout) \
/ { \
  keymap { \
    compatible = "zmk,keymap"; \
    name##_layer { \
      label = STRINGIFY(name); \
      bindings = <layout>; \
    }; \
  }; \
};


#define ALL 0xff
#if !defined COMBO_TERM
    #define COMBO_TERM 30
#endif

#define COMBO(...) CONCAT(COMBO_, VARGS(__VA_ARGS__))(__VA_ARGS__)
#define COMBO_3(name, combo_bindings, keypos) \
    COMBO_4(name, combo_bindings, keypos, ALL)
#define COMBO_4(name, combo_bindings, keypos, combo_layers) \
    COMBO_5(name, combo_bindings, keypos, combo_layers, COMBO_TERM)
#define COMBO_5(name, combo_bindings, keypos, combo_layers, combo_timeout) \
    COMBO_6(name, combo_bindings, keypos, combo_layers, combo_timeout, 0)
#define COMBO_6(name, combo_bindings, keypos, combo_layers, combo_timeout, combo_idle) \
    COMBO_7(name, combo_bindings, keypos, combo_layers, combo_timeout, combo_idle, )
#define COMBO_7(name, combo_bindings, keypos, combo_layers, combo_timeout, combo_idle, combo_vaargs) \
    / { \
        combos { \
            compatible = "zmk,combos"; \
            combo_ ## name { \
                timeout-ms = <combo_timeout>; \
                bindings = <combo_bindings>; \
                key-positions = <keypos>; \
                layers = <combo_layers>; \
                require-prior-idle-ms = <combo_idle>; \
                combo_vaargs \
            }; \
        }; \
    };





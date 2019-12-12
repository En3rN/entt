#include <entt/core/attribute.h>
#include <entt/signal/emitter.hpp>
#include "types.h"

template struct entt::family<event, test_emitter::emitter_event_family>;

ENTT_API void emit(int value, test_emitter &emitter) {
    emitter.publish<message>(value);
}
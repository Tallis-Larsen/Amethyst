#include "minecraft/src/common/world/item/Item.h"

#pragma warning(push)
#pragma warning(disable : 26495)
Item::Item(const std::string& stringId, short numericalId)
{
    using function = Item*(__thiscall*)(Item*, const std::string&, short);
    static auto func = reinterpret_cast<function>(SigScan("48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 54 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 ? 41 0F B7 D8"));
    func(this, stringId, numericalId);
}
#pragma warning(pop)

short Item::getDamageValue(CompoundTag* mUserData) const
{
    using function = short(__thiscall*)(const Item*, CompoundTag*);
    static auto func = reinterpret_cast<function>(SigScan("48 89 5C 24 ? 57 48 83 EC ? 48 8B DA 48 85 D2"));
    return func(this, mUserData);
}

Item::~Item() {

}

//
//uint64_t Item::getMaxDamage() const
//{
//    using function = uint64_t(__thiscall*)(const Item*);
//    return reinterpret_cast<function>(this->vtable[33])(this);
// }
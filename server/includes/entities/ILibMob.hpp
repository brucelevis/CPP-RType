/*
** EPITECH PROJECT, 2020
** B-CPP-501-PAR-5-1-rtype-aurele.auboin
** File description:
** LibMob
*/

#ifndef ENTITYMOBLIBMOBILIBMOB_HPP_
#define ENTITYMOBLIBMOBILIBMOB_HPP_

#include <string>
#include "singleton/ECManager.hpp"

using Entity = std::string;

namespace rtype {
    namespace system {

        class ILibMob
        {
            public:
                virtual ~ILibMob() = default;
                virtual const Entity createEntity(rtype::entity::ComponentManager &handler) = 0;
                virtual void handlerIAMob(rtype::entity::ComponentManager &handler, const Entity &id) = 0;
        };

    }
}

typedef rtype::system::ILibMob *(*createMethodeMob)(void);

#endif /* !LIBMOBILIBMOB_HPP_ */

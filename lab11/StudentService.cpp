//
// Created by Otto on 12/4/2023.
//

#include "StudentService.h"

bool StudentServiceImpl::isEnrolled(int id) const {
    return dao->findById(id).getId() != 0;
}

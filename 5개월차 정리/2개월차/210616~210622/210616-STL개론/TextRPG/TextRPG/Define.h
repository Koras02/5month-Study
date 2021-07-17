#pragma once

#ifndef __DEFINE_H__
#define __DEFINE_H__

#define SAFE_DELETE(p) if (p) { delete p; p = nullptr; }

#endif // !__DEFINE_H__

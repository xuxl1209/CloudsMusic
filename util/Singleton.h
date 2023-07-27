/**
 * @file       Singleton.h
 * @brief      单例模式封装 Function
 * @author     Xuxl<xuxl1209@foxmail.com>
 * @date       2023/07/27
 * @version    1.0
 * @copyright  Copyright 2023 Contributors as noted in the AUTHORS file.
 *             All right reserved. See COPYRIGHT for detailed Information.
 */
#ifndef SINGLETON_H
#define SINGLETON_H

#include <memory>

/**
 * @brief The Singleton class 单例模式封装类
 * @details T 类型
 *          X 为了创造多个实例对应的Tag
 *          N 同一个Tag创造多个实例索引
 */
template<class T, class X = void, int N = 0>
class Singleton {

public:
    /**
     * @brief getInstance 返回单例裸指针
     * @return
     */
    static T* getInstance() {
        static T v;
        return &v;
    }
};
/**
 * @brief The SingletonPtr class 单例模式智能指针封装类
 * @details T 类型
 *          X 为了创造多个实例对应的Tag
 *          N 同一个Tag创造多个实例索引
 */
template<class T, class X = void, int N = 0>
class SingletonPtr {

public:
    /**
     * @brief getInstance 返回单例智能指针
     * @return
     */
    static std::shared_ptr<T> getInstance() {
        static std::shared_ptr<T> v(new T);
        return v;
    }
};
#endif // SINGLETON_H

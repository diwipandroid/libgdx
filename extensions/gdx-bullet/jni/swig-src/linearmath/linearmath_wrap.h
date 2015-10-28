/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_LinearMath_WRAP_H_
#define SWIG_LinearMath_WRAP_H_

class SwigDirector_btIDebugDraw : public btIDebugDraw, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btIDebugDraw(JNIEnv *jenv);
    virtual ~SwigDirector_btIDebugDraw();
    virtual btIDebugDraw::DefaultColors getDefaultColors() const;
    virtual void setDefaultColors(btIDebugDraw::DefaultColors const &arg0);
    virtual void drawLine(btVector3 const &from, btVector3 const &to, btVector3 const &color);
    virtual void drawLine(btVector3 const &from, btVector3 const &to, btVector3 const &fromColor, btVector3 const &toColor);
    virtual void drawSphere(btScalar radius, btTransform const &transform, btVector3 const &color);
    virtual void drawSphere(btVector3 const &p, btScalar radius, btVector3 const &color);
    virtual void drawTriangle(btVector3 const &v0, btVector3 const &v1, btVector3 const &v2, btVector3 const &arg3, btVector3 const &arg4, btVector3 const &arg5, btVector3 const &color, btScalar alpha);
    virtual void drawTriangle(btVector3 const &v0, btVector3 const &v1, btVector3 const &v2, btVector3 const &color, btScalar arg4);
    virtual void drawContactPoint(btVector3 const &PointOnB, btVector3 const &normalOnB, btScalar distance, int lifeTime, btVector3 const &color);
    virtual void reportErrorWarning(char const *warningString);
    virtual void draw3dText(btVector3 const &location, char const *textString);
    virtual void setDebugMode(int debugMode);
    virtual int getDebugMode() const;
    virtual void drawAabb(btVector3 const &from, btVector3 const &to, btVector3 const &color);
    virtual void drawTransform(btTransform const &transform, btScalar orthoLen);
    virtual void drawArc(btVector3 const &center, btVector3 const &normal, btVector3 const &axis, btScalar radiusA, btScalar radiusB, btScalar minAngle, btScalar maxAngle, btVector3 const &color, bool drawSect, btScalar stepDegrees = btScalar(10.f));
    virtual void drawSpherePatch(btVector3 const &center, btVector3 const &up, btVector3 const &axis, btScalar radius, btScalar minTh, btScalar maxTh, btScalar minPs, btScalar maxPs, btVector3 const &color, btScalar stepDegrees = btScalar(10.f), bool drawCenter = true);
    virtual void drawBox(btVector3 const &bbMin, btVector3 const &bbMax, btVector3 const &color);
    virtual void drawBox(btVector3 const &bbMin, btVector3 const &bbMax, btTransform const &trans, btVector3 const &color);
    virtual void drawCapsule(btScalar radius, btScalar halfHeight, int upAxis, btTransform const &transform, btVector3 const &color);
    virtual void drawCylinder(btScalar radius, btScalar halfHeight, int upAxis, btTransform const &transform, btVector3 const &color);
    virtual void drawCone(btScalar radius, btScalar height, int upAxis, btTransform const &transform, btVector3 const &color);
    virtual void drawPlane(btVector3 const &planeNormal, btScalar planeConst, btTransform const &transform, btVector3 const &color);
    virtual void flushLines();
public:
    bool swig_overrides(int n) {
      return (n < 27 ? swig_override[n] : false);
    }
protected:
    bool swig_override[27];
};

class SwigDirector_btMotionState : public btMotionState, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btMotionState(JNIEnv *jenv);
    virtual ~SwigDirector_btMotionState();
    virtual void getWorldTransform(btTransform &worldTrans) const;
    virtual void setWorldTransform(btTransform const &worldTrans);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};


#endif

/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#ifndef _SWG_OBJECT_H_
#define _SWG_OBJECT_H_

#include <QJsonValue>

class SWGObject {
  public:
    virtual QJsonObject* asJsonObject() {
      return nullptr;
    }
    virtual ~SWGObject() {}
    virtual SWGObject* fromJson(QString &jsonString) {
        Q_UNUSED(jsonString);
        return nullptr;
    }
    virtual void fromJsonObject(QJsonObject &json) {
        Q_UNUSED(json);
    }
    virtual QString asJson() {
        return QString("");
    }
};

#endif /* _SWG_OBJECT_H_ */

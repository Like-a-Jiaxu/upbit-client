/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */
#pragma once

#include "SwaggerBaseModel.h"
#include "SwaggerMarketApi.h"

#include "SwaggerError.h"

namespace Swagger 
{

/* 마켓 코드 조회
 *
 * ## 업비트에서 거래 가능한 마켓 목록 
*/
class SWAGGER_API SwaggerMarketApi::MarketInfoAllRequest : public Request
{
public:
    virtual ~MarketInfoAllRequest() {}
	void SetupHttpRequest(const TSharedRef<IHttpRequest>& HttpRequest) const final;
	FString ComputePath() const final;
    
	/* 유의종목 필드과 같은 상세 정보 노출 여부(선택 파라미터)  */
	TOptional<bool> IsDetails;
};

class SWAGGER_API SwaggerMarketApi::MarketInfoAllResponse : public Response
{
public:
    virtual ~MarketInfoAllResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonObject) final;
    
    TSharedPtr<FJsonObject> Content;
};

}

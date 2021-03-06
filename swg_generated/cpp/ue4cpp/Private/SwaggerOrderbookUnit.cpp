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
#include "SwaggerOrderbookUnit.h"

#include "SwaggerModule.h"
#include "SwaggerHelpers.h"

#include "Templates/SharedPointer.h"

namespace Swagger 
{

void SwaggerOrderbookUnit::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AskPrice.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ask_price")); WriteJsonValue(Writer, AskPrice.GetValue());	
	}
	if (BidPrice.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bid_price")); WriteJsonValue(Writer, BidPrice.GetValue());	
	}
	if (AskSize.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ask_size")); WriteJsonValue(Writer, AskSize.GetValue());	
	}
	if (BidSize.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bid_size")); WriteJsonValue(Writer, BidSize.GetValue());	
	}
	Writer->WriteObjectEnd();
}

bool SwaggerOrderbookUnit::FromJson(const TSharedPtr<FJsonObject>& JsonObject)
{
	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("ask_price"), AskPrice);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("bid_price"), BidPrice);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("ask_size"), AskSize);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("bid_size"), BidSize);

	return ParseSuccess;
}
}

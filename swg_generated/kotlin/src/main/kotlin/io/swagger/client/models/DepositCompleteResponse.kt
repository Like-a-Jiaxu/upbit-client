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
package io.swagger.client.models


/**
 * 
 * @param currency 화폐를 의미하는 영문 대문자 코드
 * @param deposit_address 입금 주소
 * @param secondary_address 2차 입금 주소
 */
data class DepositCompleteResponse (
    /* 화폐를 의미하는 영문 대문자 코드 */
    val currency: kotlin.String? = null,
    /* 입금 주소 */
    val deposit_address: kotlin.String? = null,
    /* 2차 입금 주소 */
    val secondary_address: kotlin.String? = null
) {

}

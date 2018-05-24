// 正则表达式

#import <Foundation/Foundation.h>

@interface NSString (Check)

/** 是否全部重复*/
- (BOOL)checkLetterForReset;

/** 手机号*/
- (BOOL)checkPhoneNumInput;

/** 邮箱*/
- (BOOL)validateEmail;

/** 用户名（字母或数字开头的6-20位字符串）*/
- (BOOL)validateUserName;

/** 密码（字母或数字开头的6-12位字符串）*/
- (BOOL)validatePassword;

/** 昵称（4-8位汉字的字符串）*/
- (BOOL)validateNickname;

/** 6位数字验证码*/
- (BOOL)validCode;

/**
 * 判断字符串中的字母数字
 * 1 代表纯数字
 * 2 代表纯字母
 * 3 代表有数字+字母
 * 4 代表除了数字和字母还有其他字符
 */
- (NSInteger)checkIsHaveNumAndLetter;

/** 判断字符串中是否是全部重复或连续六位数字*/
- (BOOL)isNumForRepeatAndSeries;

/** 验证是否不为空 */
- (BOOL)verifyIsNotEmpty;

/** 身份证号*/
- (BOOL)validateIdentityCard;

/** 16、19位银行卡号*/
- (BOOL)validBankNumber;

/** 判断是否是一个合格的身份证号*/
- (BOOL)validateIDCardNumber;

/** 判断是否是一个合格的银行卡号*/
- (BOOL)checkCardNo:(NSString *)cardNo;

- (BOOL)checkBankCardNo;

/** 得到身份证的生日****这个方法中不做身份证校验，请确保传入的是正确身份证*/
- (NSString *)getIdCardBirthday;



@end





//
//  CommonUtils.h
//  Pods
//
//  Created by Adam on 2017/6/15.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CommonUtils : NSObject

+ (NSString *)currentTimeInterval;
+ (NSString *)getCurrentTime;
+ (NSString *)curDateString;
+ (NSString *)currentDateStr:(NSString *)strSecs;

//手机系统版本
+ (NSString *)getAppVersion;

#pragma mark - Common Method
+ (UIColor *)colorWithHexString:(NSString *)hex;

#pragma mark - copy file
+ (void)doCopyFile:(NSString *)sourcePath targetPath:(NSString *)targetPath houseId:(NSString *)houseId;

+ (BOOL)isExistDirName:(NSString *)dirName;

#pragma mark - 定宽高度自适应
+ (CGFloat)calcuViewHeight:(NSString *)content font:(UIFont*)font width:(CGFloat)width;
+ (CGFloat)calcuViewWidth:(NSString *)content font:(UIFont *)font;

+ (NSString *)commonMsg;

+ (BOOL)isMobileNumber:(NSString *)mobileNum;

+ (UIImage *)imageWithColor:(UIColor *)color andSize:(CGSize)size;

//单个文件的大小
+ (long long) fileSizeAtPath:(NSString*) filePath;

//遍历文件夹获得文件夹大小，返回多少M
+ (float)folderSizeAtPath:(NSString*) folderPath;

// QR
+ (UIImage *)qrImageForString:(NSString *)string imageSize:(CGFloat)Imagesize logoImageSize:(CGFloat)waterImagesize;
    
+ (UIImage *)createNonInterpolatedUIImageFormCIImage:(CIImage *)image withSize:(CGFloat) size waterImageSize:(CGFloat)waterImagesize;

@end

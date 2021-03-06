/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface DEValidatorResult : NSObject {

	NSString* _status;
	NSArray* _errors;
	NSArray* _warnings;

}

@property (nonatomic,retain) NSString * status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * errors;                //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSArray * warnings;              //@synthesize warnings=_warnings - In the implementation block
-(NSString *)status;
-(NSArray *)errors;
-(void)setStatus:(NSString *)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(NSArray *)warnings;
-(void)setWarnings:(NSArray *)arg1 ;
@end


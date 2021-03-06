/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSStackFrameInfo : NSObject {

	NSString* _realFunctionName;
	unsigned long long _address;
	NSString* _functionName;
	NSString* _executablePath;
	NSString* _className;

}

@property (nonatomic,readonly) unsigned long long address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * functionName;                 //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) NSString * executableName; 
@property (nonatomic,readonly) NSString * executablePath;               //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * className;                    //@synthesize className=_className - In the implementation block
-(id)description;
-(unsigned long long)address;
-(NSString *)executablePath;
-(NSString *)className;
-(NSString *)functionName;
-(NSString *)executableName;
@end


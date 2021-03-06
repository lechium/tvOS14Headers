/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTSOSMetric.h>

@class NSString;

@interface IDSSOSMetric : NSObject <CUTSOSMetric> {

	unsigned long long _sosDomain;
	unsigned long long _sosType;
	long long _sosError;
	NSString* _operationID;

}

@property (assign,nonatomic) unsigned long long sosDomain;              //@synthesize sosDomain=_sosDomain - In the implementation block
@property (assign,nonatomic) unsigned long long sosType;                //@synthesize sosType=_sosType - In the implementation block
@property (assign,nonatomic) long long sosError;                        //@synthesize sosError=_sosError - In the implementation block
@property (nonatomic,retain) NSString * operationID;                    //@synthesize operationID=_operationID - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metricWithDomain:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(long long)arg3 bagURL:(id)arg4 ;
-(NSString *)name;
-(NSString *)operationID;
-(void)setOperationID:(NSString *)arg1 ;
-(id)initWithDomain:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(long long)arg3 bagURL:(id)arg4 ;
-(unsigned long long)sosDomain;
-(unsigned long long)sosType;
-(long long)sosError;
-(void)setSosDomain:(unsigned long long)arg1 ;
-(void)setSosType:(unsigned long long)arg1 ;
-(void)setSosError:(long long)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPValueTransformer.h>

@interface HAPDataValueTransformer : HAPValueTransformer
+(void)initialize;
+(BOOL)isValidFormat:(unsigned long long)arg1 ;
+(Class)expectedTransformedClassForFormat:(unsigned long long)arg1 ;
+(id)defaultDataValueTransformer;
-(id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
@end


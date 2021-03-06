/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchFilter.h>

@interface GEOResultTypeSearchFilter : NSObject <GEOSearchFilter> {

	unsigned long long _types;

}

@property (nonatomic,readonly) unsigned long long types;              //@synthesize types=_types - In the implementation block
-(id)init;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
-(id)initWithResultTypes:(unsigned long long)arg1 ;
-(unsigned long long)types;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSpeakableNamespaceProvider.h>

@class NSString, NSSet;

@interface _SVXSpeakableNamespaceDomainOccurrenceProvider : NSObject <AFSpeakableNamespaceProvider> {

	NSString* _domain;
	unsigned long long _count;
	NSSet* _deferredMessageKeys;

}

@property (nonatomic,copy) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) unsigned long long count;               //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSSet * deferredMessageKeys;              //@synthesize deferredMessageKeys=_deferredMessageKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerForDomain:(id)arg1 ;
-(unsigned long long)count;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)stringForExpression:(id)arg1 ;
-(void)setDeferredMessageKeys:(NSSet *)arg1 ;
-(NSSet *)deferredMessageKeys;
@end

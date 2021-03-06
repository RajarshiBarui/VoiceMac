//
//  MGMXMLElement.h
//  MGMXML
//
//  Created by Mr. Gecko on 9/22/10.
//  Copyright (c) 2011 Mr. Gecko's Media (James Coleman). http://mrgeckosmedia.com/
//
//  Permission to use, copy, modify, and/or distribute this software for any purpose
//  with or without fee is hereby granted, provided that the above copyright notice
//  and this permission notice appear in all copies.
//
//  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
//  REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
//  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT,
//  OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
//  DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
//  ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//

#import <Foundation/Foundation.h>
#import <VoiceBase/MGMXMLNode.h>

@interface MGMXMLElement : MGMXMLNode {

}
- (id)initWithName:(NSString *)name;
//- (id)initWithName:(NSString *)name URI:(NSString *)URI; //primitive
- (id)initWithName:(NSString *)name stringValue:(NSString *)string;
- (id)initWithXMLString:(NSString *)string error:(NSError **)error;

- (NSArray *)elementsForName:(NSString *)name;
- (NSArray *)elementsForLocalName:(NSString *)localName URI:(NSString *)URI;

- (void)addAttribute:(MGMXMLNode *)attribute; //primitive
- (void)removeAttributeForName:(NSString *)name; //primitive
//- (void)setAttributes:(NSArray *)attributes; //primitive
//- (void)setAttributesAsDictionary:(NSDictionary *)attributes;
- (NSArray *)attributes; //primitive
- (MGMXMLNode *)attributeForName:(NSString *)name;
//- (MGMXMLNode *)attributeForLocalName:(NSString *)localName URI:(NSString *)URI; //primitive

//- (void)addNamespace:(MGMXMLNode *)aNamespace; //primitive
//- (void)removeNamespaceForPrefix:(NSString *)name; //primitive
//- (void)setNamespaces:(NSArray *)namespaces; //primitive
//- (NSArray *)namespaces; //primitive
//- (MGMXMLNode *)namespaceForPrefix:(NSString *)name;
//- (MGMXMLNode *)resolveNamespaceForName:(NSString *)name;
- (NSString *)resolvePrefixForNamespaceURI:(NSString *)namespaceURI;

//- (void)insertChild:(MGMXMLNode *)child atIndex:(NSUInteger)index; //primitive
//- (void)insertChildren:(NSArray *)children atIndex:(NSUInteger)index;
//- (void)removeChildAtIndex:(NSUInteger)index; //primitive
//- (void)setChildren:(NSArray *)children; //primitive
//- (void)addChild:(MGMXMLNode *)child;
//- (void)replaceChildAtIndex:(NSUInteger)index withNode:(MGMXMLNode *)node;
//- (void)normalizeAdjacentTextNodesPreservingCDATA:(BOOL)preserve;
@end
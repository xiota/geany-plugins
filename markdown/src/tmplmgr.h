/*
 * tmplmgr.h - Part of the Geany Markdown plugin
 *
 * Copyright 2012 Matthew Brush <mbrush@codebrainz.ca>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef MARKDOWN_TEMPLATE_MANAGER_H
#define MARKDOWN_TEMPLATE_MANAGER_H 1

#include <glib.h>

G_BEGIN_DECLS

#include "tmpl.h"

typedef struct MarkdownTemplateManager MarkdownTemplateManager;

MarkdownTemplateManager *markdown_template_manager_new(const gchar *user_path,
  const gchar *system_path);
void markdown_template_manager_free(MarkdownTemplateManager *mgr);
GSList *markdown_template_manager_list_templates(MarkdownTemplateManager *mgr);

G_END_DECLS

#endif /* MARKDOWN_TEMPLATE_MANAGER_H */
